#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <queue>
#include <map>
#include <vector>

using namespace std;

class Graph
{
public:
  int no, pairs;
  map < int, vector <int> > conflicts;
  vector < int > color;
  map < int, int > cc;
  int count, counter;
  int diff, red, blue;

  Graph( int n, int p )
  {
    no = n;
    pairs = p;
    red = 0;
    blue = 0;
    diff = -21;
    count = 0;
    counter = 1;
    color.resize(no, 21);
  }

  bool bfs( int v )
  {
    if( red > blue )
    {
      color[v] = 0;
      red++;
    }
    else
    {
      color[v] = 1;
      blue++;
    }
    queue < int > q;
    q.push(v);

    while ( !q.empty() )
    {
        int u = q.front();
        q.pop();

        for( auto & x : conflicts[u] )
        {
          if( x == u )
          { return false; }
          if( color[x] == 21 )
          {
            count++;
            color[x] = 1 - color[u];
            if( !color[x] )
            { red++; }
            else
            { blue++; }
            q.push(x);
          }
          else if( color[x] == color[u] )
          { return false; }
        }
    }
    return true;
  }

  bool check()
  {
    for( int i = 0 ; i < no ; i++ )
    {
      if( color[i] == 21 )
      {
        if( !bfs(i) )
        { return false; }
        cc.insert({counter, count});
        counter++;
        count = 0;
      }
    }
    return true;
  }

  void calc( int check )
  {
    if( check )
    {
      for( int i = 0 ; i < no ; i++ )
      {
        if( conflicts[i].empty() )
        {
          if( red > blue )
          {
            if( color[i] == 0 )
            {
              color[i] = 1;
              red--;
              blue++;
            }
          }
          else if( blue > red )
          {
            if( color[i] == 1 )
            {
              color[i] = 0;
              blue--;
              red++;
            }
          }
          else
          { break; }
        }
      }
      int size = cc.size();
      int sum = 0;
      for( auto & x : cc )
      { sum += x.second; }

      int flag = sum % size;
      if( no % 2 == 0 && pairs % 2 == 0 && flag && flag % 2 == 0 )
      { diff = 0; }
      else if( no % 2 != 0 && pairs % 2 != 0 )
      { diff = 1; }
      else
      { diff = abs(red-blue); }
    }
    else
    { diff = -1; }
  }

  void print()
  {
    if( diff != -1 )
    {
      cout << "=========================" << endl << "=========================" << endl;
      cout << " NODES = " << no << "  |  PAIRS = " << pairs << endl;
      cout << "=========================" << endl;
      for( auto & i : conflicts )
      {
        for( auto & x : i.second )
        { cout << " !! " << i.first << " & " << x << " !!"; }
        cout << endl;
      }
      cout << "=========================" << endl;
      cout << "     GRAPH COLORIN'      " << endl;
      cout << "=========================" << endl;
      for( int count = 0 ; count < no ; count++ )
      {
        cout << "     ( " << count << " ) is ";
        if( color[count] == 21 ) { cout << "INIT !" << endl; }
        else if( color[count] == 0 ) { cout << "RED" << endl; }
        else if( color[count] == 1 ) { cout << "BLUE" << endl; }
        else { cout << color[count] << endl; }
      }
    }
    cout << "=========================" << endl;
    cout << " DIFFERENCE =         " <<  diff << endl;
    cout << "=========================" << endl;
  }
};

int main()
{
  int no, conflicts;
  cin >> no >> conflicts;
  Graph g(no, conflicts);

  int pair1, pair2;
  for( int i = 0 ; i < conflicts ; i++ )
  {
    cin >> pair1 >> pair2;
    g.conflicts[pair1].push_back(pair2);
    g.conflicts[pair2].push_back(pair1);
  }
  if( g.check() )
  { g.calc(1); }
  else
  { g.calc(0); }

  cout << g.diff << endl;
  // g.print();



  return 0;
}
