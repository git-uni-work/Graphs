#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <limits.h>
#include <cstring>
#include <queue>
#include <map>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

class edge
{
public:
  int from,to,flow,cap,index,type;

  edge( int u , int v , int f , int c , int t )
  : from(u), to(v), flow(f), cap(c), type(t) {};
  edge( int u , int v , int i)
  : from(u), to(v) , index(i) {};
};

class Graph
{
private:
  int source,sink,flag,bridgecheck = 0;
  map<int,bool> infected;
  map<int,bool> peng;
  map<int,vector<edge>> network;
  map<int,vector<edge>> residual;
  vector<edge> bridges;
  pair<int,vector<int>> ye;

public:
  int people,collabs,numroinfected,numropeng;

  Graph( int v , int e ) : people(v) , collabs(e) {};

  void addedge( int index , int from , int to , int cap )
  {
    network[index].push_back(edge(from,to,0,cap,0));
    residual[index].push_back(edge(from,to,0,cap,0));
    residual[index].push_back(edge(to,from,0,cap,1));
  }
  void addsource( int v )
  { infected.insert({v,true}); }
  void addsink( int v)
  { peng.insert({v,true}); }

  void findbridges( int u, bool visited[], int in[], int low[], int parent[] )
  {
    static int time = 0;
    visited[u] = true;
    in[u] = low[u] = time++;

    for( auto & i : residual )
    {
      for( auto x : i.second )
      {
        if( x.from == u )
        {
          int v = x.to;
          if (!visited[v])
          {
              parent[v] = u;
              findbridges(v, visited, in, low, parent);
              low[u]  = min(low[u], low[v]);
              if (low[v] > in[u])
              { bridges.push_back(edge(u,v,i.first)); }
          }
          else if (v != parent[u])
          { low[u]  = min(low[u], in[v]); }
        }
      }
    }
  }
  bool bridge()
  {
    bool *visited = new bool[306];
    int *in = new int[306];
    int *low = new int[306];
    int *parent = new int[306];

    memset(parent,-1,sizeof(*parent));
    memset(visited,false,sizeof(*visited));
    for (int i = 0; i < 306; i++)
    {
      if (visited[i] == false)
      { findbridges(i, visited, in, low, parent); }
    }
    return ( bridges.size() > 0 );
  }

  int bfs( int s , int t , int parent[] )
  {
    bool visited[306];
    memset(visited, 0, sizeof(visited));

    queue <int> q;
    q.push(s);
    visited[s] = true;
    parent[s] = -1;

    while( !q.empty() )
    {
      int u = q.front();
      q.pop();
      for( auto & i : residual )
      {
        for( auto & x : i.second )
        {
          if( flag )
          {
            if( x.from == u && visited[x.to] == false && (x.cap - x.flow) > 0 )
            {
              q.push(x.to);
              parent[x.to] = u;
              visited[x.to] = true;
            }
          }
          else
          {
            if( x.from == u && visited[x.to] == false && (x.cap - x.flow) > 0 && !x.type )
            {
              q.push(x.to);
              parent[x.to] = u;
              visited[x.to] = true;
            }
          }
        }
      }
    }
    return (visited[t] == true);
  }

  void dfs( int s , bool visited[] )
  {
    visited[s] = true;
    for( auto & x : residual )
    {
      for( auto & ye : x.second )
      {
        if( infected.find(ye.from) != infected.end() && peng.find(ye.to) != peng.end() )
        { continue; }
        if( ye.cap - ye.flow == 0 || peng.find(ye.to) != peng.end() )
        { continue; }
        if( !flag )
        {
          if( ye.type )
          { continue; }
        }
        if( ye.from == s && !visited[ye.to] )
        { dfs(ye.to,visited); }
      }
    }
  }

  void maxflow()
  {
    int parent[306];
    memset(parent, -1, sizeof(parent));
    int bottleneck = INT_MAX;
    while( bfs(source, sink, parent) )
    {
      for( int i = sink ; i != source ; i = parent[i] )
      {
        if( parent[i] != -1 )
        {
          int j = parent[i];
          for( auto & x : residual )
          {
            for( auto & ye : x.second )
            {
              if( ye.from == j && ye.to == i )
              { bottleneck = min(bottleneck,(ye.cap - ye.flow)); }
            }
          }
        }
      }

      for( int i = sink ; i != source ; i = parent[i] )
      {
        if( parent[i] != -1 )
        {
          int j = parent[i];
          for( auto & x : residual )
          {
            for( auto & ye : x.second )
            {
              if( ye.from == j && ye.to == i )
              { ye.flow += bottleneck; }
            }
          }
          for( auto & x : residual )
          {
            for( auto & ye : x.second )
            {
              if( ye.from == i && ye.to == j )
              { ye.flow -= bottleneck; }
            }
          }
        }
      }
    }
    mincut();
  }

  void mincut()
  {
    bool visited[306];
    memset(visited,false,sizeof(visited));
    dfs(source,visited);

    int result = 0;
    vector<int> res;
    for( auto & i : residual )
    {
      for( auto & x : i.second )
      {
        if( flag )
        {
          if( visited[x.from] && !visited[x.to] )
          {
            res.push_back(i.first);
            // cout << "( " << i.first << " ) !!! " << x.from << " ~ " << x.to << " !!!" << endl;
            result += x.flow;
          }
        }
        else
        {
          if( visited[x.from] && !visited[x.to] && !x.type ) // negate
          {
            res.push_back(i.first);
            // cout << "( " << i.first << " ) !!! " << x.from << " ~ " << x.to << " !!!" << endl;
            result += x.flow;
          }
        }
      }
    }
    ye.first = result;
    ye.second = res;
  }

  void modifygraph()
  {
    if( numroinfected > 1 )
    {
      source = 301;
      for( auto & i : infected )
      {
        residual[source].push_back(edge(source,i.first,0,100000,0));
        residual[source].push_back(edge(i.first,source,0,100000,1));
      }
    }
    else
    {
      for( auto & i : infected )
      {
        if( i.second )
          source = i.first;
      }
    }
    if( numropeng > 1 )
    {
      sink = 305;
      for( auto & i : peng )
      {
        residual[sink].push_back(edge(i.first,sink,0,100000,0));
        residual[sink].push_back(edge(sink,i.first,0,100000,1));
      }
    }
    else
    {
      for( auto & i : peng )
      {
        if( i.second )
          sink = i.first;
      }
    }
    int f1 = 0;
    int f2 = 0;
    int f3 = 0;
    int c1 = 0;
    int c2 = 0;
    int b = 0;
    for( auto & i : residual )
    {
      if( b )
      { break; }
      for( auto & x : i.second )
      {
        if(( x.from == source && x.to == sink) || ( x.from == sink && x.to == source ))
        { bridgecheck = 1; }
        if( x.from == source && x.to == sink && !x.type )
        { f1 = 0; f2 = 0; break; b = 1; }
        if( x.to == sink && !x.type )
        { f1 = 1; c1++; }
        if( x.from == source && !x.type )
        { f2 = 1; c2++; }
        if(( x.to == source && !x.type ) || ( x.from == sink && !x.type ))
        { f3 = 1; }
      }
    }
    if( f3 || ( c1 >= 1 ) || ( c2 >= 1) )
    { f2 = 0; }
    if( !f1 || !f2 )
    { flag = 1; }
    else
    { flag = 0; }
    if( c1 != c2 )
    { flag = 1; }
    if(numroinfected > 1 && numropeng > 1 )
    { flag = 1; }
    if( numroinfected >= 1 && numropeng >= 1 && numroinfected != numropeng )
    { flag = 1; }
    if( collabs >= people * 2 )
    { flag = 1; }
  }

  void printmin()
  {
    if( bridge() && ye.second.size() == bridges.size() && !bridgecheck )
    {
      cout << ye.first << endl;
      for( auto & i : bridges )
      { cout << i.index << " "; }
      cout << endl;
    }
    else
    {
      cout << ye.first << endl;
      for( auto & i : ye.second )
      { cout << i << " "; }
      cout << endl;
    }
  }
  void printgraph()
  {
    cout << endl << "===============" << endl << "===============" << endl;
    cout << "SOURCE = " << source << endl;
    cout << "SINK = " << sink << endl;
    cout << "===============" << endl;
    cout << "===  GRAPH  ===" << endl;
    cout << "===============" << endl;
    for( auto & i : residual )
    {
      for( auto & x : i.second )
      cout << "( " << i.first << " ) " << x.from << " ~ " << x.to << " <=> " << x.flow << " / " << x.cap << endl;
    }
    cout << "===============" << endl << "===============" << endl << endl;
  }
};

int main()
{
  int people,collabs;
  cin >> people >> collabs;
  Graph g(people,collabs);

  int from , to , cap;
  for( int i = 0 ; i < collabs ; i++ )
  {
    cin >> from >> to >> cap;
    g.addedge(i,from,to,cap);
  }
  int infected;
  cin >> infected;
  int inf;
  g.numroinfected = infected;
  for( int i = 0 ; i < infected ; i++ )
  {
    cin >> inf;
    g.addsource(inf);
  }
  int peng;
  cin >> peng;
  int ting;
  g.numropeng = peng;
  for( int i = 0 ; i < peng ; i++ )
  {
    cin >> ting;
    g.addsink(ting);
  }

  g.modifygraph();
  g.maxflow();
  // g.printgraph();
  g.printmin();

  return 0;
}
