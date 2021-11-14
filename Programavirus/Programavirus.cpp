#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <map>
#include <vector>
#include <list>
#include <algorithm>

#define UNDEF -1

using namespace std;


class Bond
{
public:
    int u;
    int v;
    Bond( int u, int v )
    {
      this->u = u;
      this->v = v;
    }
};

class ConnectedComponent
{

private:
  map<unsigned int , vector<unsigned int>> bonds;

public:

  unsigned int cells;
  int singlecell = UNDEF;

  ConnectedComponent()
  { this->cells = this->bonds.size(); }

  void addedge( int x, int y )
  {
    bonds[x].push_back(y);
    bonds[y].push_back(x);
    cells = this->bonds.size();
  }

  void printcc()
  {
    if( bonds.empty() || singlecell != UNDEF )
    { cout << "1" << endl << singlecell << endl; }
    else
    {
      cout << cells << endl;
      for(auto & x : bonds)
      { cout << x.first << " "; }
      cout << endl;
    }
  }

};


class Graph
{
    unsigned int numrocells;
    unsigned int numrobonds;
    map<unsigned int , vector<unsigned int>> bonds;
    vector<pair<int,int>> pairs;

    void DFS( int u , int in[] , int low[] , list<Bond> * visited , int parent[] , int children[] )
    {
      static int time = 0;
      in[u] = low[u] = time++;
      int check = numrocells - singles.size() - 1;

      for ( auto & i : bonds[u] )
      {
        int v = i;
        children[u]++;

        if ( in[v] == UNDEF )
        {
          parent[v] = u;
          visited->push_back(Bond(u, v));

          DFS( v , in , low , visited , parent , children);

          low[u] = min(low[u], low[v]);

          if( low[u] == 0 && u == 0 )
          { low[u] = 1; }

          if ( (low[u] == 1 && children[u] >= 1 && children[u] != check ) || ( in[u] > 1 && low[v] >= in[u] ) )
          {
            ConnectedComponent * component = new ConnectedComponent;
            while ( visited->back().u != u || visited->back().v != v )
            {
              if( (v == visited->back().v || v == visited->back().u) )
              {pairs.push_back(make_pair(visited->back().u,visited->back().v));}
              visited->pop_back();
              component->addedge( visited->back().u,visited->back().v );
            }
            component->addedge( visited->back().u,visited->back().v );
            visited->pop_back();
            components.push_back( *component );
          }
      }
      else if ( v != parent[u] )
      {
        low[u] = min(low[u], in[v]);
        if ( in[v] < in[u] )
        { visited->push_back(Bond(u,v)); }
      }
    }
  }

public:

  vector<ConnectedComponent> components;
  vector<ConnectedComponent> singles;

  Graph( int v )
  {
    this->numrocells = v;
    this->numrobonds = 0;
  }

  void addedgee( int x , int y )
  {
    bonds[x].push_back(y);
    bonds[y].push_back(x);
    numrobonds++;
  }

  bool find( unsigned int x )
  {
    if( bonds.find(x) == bonds.end() )
    {
      for( unsigned int u = 0 ; u < numrocells ; u++ )
      {
        for(auto & i : bonds[u])
        {
          if( i == x )
          { return true; }
        }
      }
      return false;
    }
    else
    { return true; }
  }

  void CC()
  {
    int * in = new int[numrocells];
    int * low = new int[numrocells];
    int * parent = new int[numrocells];
    int * children = new int[numrocells];
    list<Bond> * visited = new list<Bond>[numrobonds];
    for ( unsigned int i = 0 ; i < numrocells ; i++ )
    {
        in[i] = UNDEF;
        low[i] = UNDEF;
        parent[i] = UNDEF;
        children[i] = 0;
        if( !find(i) )
        {
          ConnectedComponent * singlecc = new ConnectedComponent;
          singlecc->singlecell = (int) i;
          singlecc->cells = 1;
          singles.push_back( * singlecc );
        }
    }

    for ( unsigned int i = 0 ; i < numrocells ; i++ )
    {
      if ( in[i] == UNDEF )
      { DFS(i, in, low, visited, parent, children); }

      int flag = 0;
      ConnectedComponent * component = new ConnectedComponent;
      while ( visited->size() > 0 )
      {
        flag = 1;
        component->addedge( visited->back().u,visited->back().v );
        visited->pop_back();
      }
      if( flag )
      { components.push_back( *component ); }
    }

    for(auto & i : pairs)
    {
      if( children[i.second] <= 1)
      {
        ConnectedComponent * component = new ConnectedComponent;
        component->addedge( i.first,i.second );
        components.push_back( *component );
      }
    }
  }

  ConnectedComponent findoptimal()
  {
    ConnectedComponent robusting;
    vector<ConnectedComponent> all(singles);
	  all.insert(all.end(), components.begin(), components.end());

    sort( all.begin( ), all.end( ), [ ]( const ConnectedComponent & l, const ConnectedComponent & r )
    {
      return l.cells > r.cells;
    });

    for( auto & i : all )
    {
      if( (i.cells % 2 == 0 || i.singlecell != UNDEF) && i.cells != numrocells )
      {
        robusting = i;
        break;
      }
    }
    return robusting;
  }

};


int main()
{
  unsigned int x,y;
  unsigned int numrocells,numrobonds;
  cin >> numrocells >> numrobonds;

  Graph g(numrocells);
  if( numrobonds == 0 )
  {
    ConnectedComponent * singlecc = new ConnectedComponent;
    singlecc->singlecell = (int) 0;
    g.singles.push_back( * singlecc );
  }
  else
  {
    for( unsigned int i = 0 ; i < numrobonds ; i++ )
    {
      cin >> x >> y;
      g.addedgee(x,y);
    }
    g.CC();
  }

  // cout << "=====" << endl << endl << g.components.size() << " two-connected components in graph" << endl << endl;

  ConnectedComponent robust = g.findoptimal();
  if( (g.components.size() == 1 && robust.cells == numrocells) || (g.components.size() == 1 && robust.cells == 0) )
  { cout << "0" << endl; }
  else
  { robust.printcc(); }

  for( auto & i : g.components )
  { i.printcc(); }
  cout << "=====" << endl;
  for( auto & i : g.singles )
  { i.printcc(); }

  return 0;
}
