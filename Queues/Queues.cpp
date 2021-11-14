#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int main()
{
	int size, jump;
	cin >> size;
	cin >> jump;
	string line1;
	string line2;

	cin >> line1;
	cin >> line2;

	vector < bool > reach;
	for (int i = 0; i < size ; i++)
	{
		if (line1[i] == '.')
		{	reach.push_back(false);	}
		else
		{	reach.push_back(true);	}
	}
	for (int i = 0; i < size; i++)
	{
		if (line2[i] == '.')
		{	reach.push_back(false);	}
		else
		{	reach.push_back(true);	}

	}
	for (int i = 0; i < jump; i++)
	{
		reach.push_back(false);
	}

	/*cout << endl;
	int x = 0;
	for (auto i : reach)
	{
		cout << x + 1 << "-" << i << endl;
		x++;
	}
	cout << endl;*/

	vector < vector < int > > graph;
	graph.resize(2*size, vector<int>());
	for ( int i = 0 ; i < (int) reach.size() ; i++)
	{
		if ( i != size - 1 && i < 2*size - 1 && !reach[i + 1] && !reach[i] )
		{	graph[i].push_back(i + 1);	}
		if ( i > 0 && i != size && i < 2*size - 1 && !reach[i - 1] && !reach[i] )
		{	graph[i].push_back(i - 1);	}
		if ( i < size && !reach[ i + size + jump ] && !reach[i] )
		{	graph[i].push_back(i + size + jump);	}
		if ( i > size && i < 2*size - 1 &&  i-size+jump < size && !reach[i - size + jump] && !reach[i] )
		{	graph[i].push_back(i - size + jump);	}
		if (i > size && i < 2*size && i+jump >= 2*size && !reach[i + jump] && !reach[i])
		{	graph[i].push_back(i + jump);	}
	}

	/*for ( int x = 0; x < 2 * size ; x++)
	{
		cout << x+1 << " -> ";
		for ( int y = 0; y < graph[x].size(); y++)
		{
			cout << graph[x][y] + 1 << " | ";
		}
		cout << endl;
	}*/

	queue < int > q;
	vector < int > level;
	level.resize(reach.size());

	q.push(0);
	int pos;
	int flag = 0;
	while ( !q.empty() )
	{
		int current = q.front();
		q.pop();
		int lvl = level[current];
		for ( auto &x : graph[current] )
		{
			if (x >= 2 * size)
			{
				level[x] = lvl + 1;
				pos = x;
				flag = 1;
				break;
			}
			else
			{
				if (current - x == 1)
				{
					if ( level[current] >= x % size )
					{continue;}
				}
				if ( !reach[x] )
				{
					q.push(x);
					level[x] = lvl + 1;
					reach[x] = true;
				}
			}
		}
		if ( flag )
		{break;}
	}

	if (flag == 0)
	{cout << "-1" << endl;}
	else
	{cout << level[pos] << endl;}

	return 0;
}