#include <iostream>
#include <list>
#include <map>
#include <stack>

using namespace std;

void bfs(map<int, list<int>> g, int v, int n)
{
	int a[n] = {0};
	list<int> p;
	int s, c = 0;
	list<int>::iterator li;
	p.push_back(v);
	a[v] = 1;
	while (!p.empty())
	{
		s = p.front();
		cout << s << " ";
		p.pop_front();
		for (li = g[s].begin(); li != g[s].end(); li++)
		{
			if (a[*li] == 0)
			{
				p.push_back(*li);
				a[*li] = 1;
			}
			else
			{
				c = 1;
			}
		}
	}
	if (c == 1)
	{
		cout << "\nGraph have a Cycle";
	}
	else
	{
		cout << "\nGraph not have cycle";
	}
}

bool find11(map<int, list<int>> g, int f, int t)
{
	list<int>::iterator m;
	for (m = g[f].begin(); m != g[f].end(); m++)
	{
		if (*m == t)
			return true;
	}
	return false;
}

void shortest(map<int, list<int>> g, int f, int t)
{
	list<int>::iterator li;
	list<int> path, s;
	bool y = false, possible = false;
	s.push_back(f);
	int a[g.size()] = {0};
	path.push_back(f);
	int dist[g.size()] = {0}, z;
	a[f] = 1;
	while (!path.empty())
	{
		int c = path.front();
		path.pop_front();
		for (li = g[c].begin(); li != g[c].end(); li++)
		{
			if (a[*li] == 0)
			{
				a[*li] = 1;
				path.push_back(*li);
				dist[*li] = dist[c] + 1;
				s.push_back(*li);
				if (*li == t)
					goto z;
				else
				{
					possible = find11(g, *li, t);
					if (possible == false)
						s.pop_back();
					else
					{
						s.push_back(t);
						goto z;
					}
				}
			}
		}
	}
z:
	cout << "\nLength of shortest path is " << dist[t] << endl;
	for (li = s.begin(); li != s.end(); li++)
	{
		cout << *li << " ";
	}
}

void dfs(map<int, list<int>> g, int v, int n)
{
	stack<int> d;
	list<int>::iterator li;
	int a[n] = {0}, c = 0;
	a[v] = 1;
	d.push(v);
	while (!d.empty())
	{
		int s = d.top();
		cout << s << " ";
		d.pop();
		for (li = g[s].begin(); li != g[s].end(); li++)
		{
			if (a[*li] == 0)
			{
				d.push(*li);
				a[*li] = 1;
			}
			else
			{
				c = 1;
			}
		}
	}
	if (c == 1)
	{
		cout << "\nGraph have a Cycle";
	}
	else
	{
		cout << "\nGraph not have cycle";
	}
}

void disp(map<int, list<int>> g)
{
	map<int, list<int>>::iterator it;
	list<int>::iterator l;
	for (it = g.begin(); it != g.end(); it++)
	{
		cout << it->first << "->";
		for (l = it->second.begin(); l != it->second.end(); l++)
		{
			cout << *l << " ";
		}
		cout << endl;
	}
}

int main()
{
	map<int, list<int>> g;
	int i, a, b, n;
	// cout<<"\nEnter vertices of graph ";
	// cin>>n;
	// for(i = 0; i < n; i++)
	// {
	// 	cout<<"\nEnter total of all adjacent of "<<i<<" ";
	// 	cin>>a;
	// 	for(int j = 0; j < a; j++)
	// 	{
	// 		cout<<"\nEnter ";
	// 		cin>>b;
	// 		g[i].push_back(b);
	// 	}
	// }
	g[0] = {1, 3};
	g[1] = {0, 2};
	g[2] = {1};
	g[3] = {0, 4, 7};
	g[4] = {3, 5, 6};
	g[5] = {4, 6};
	g[6] = {4, 5, 7};
	g[7] = {3, 6};
	disp(g);
	cout << "\nBreadth first search is\n";
	bfs(g, 0, n);
	//cout<<endl;
	//cout<<"\n\nDepth First Search is \n";
	//dfs(g,0,n);
	shortest(g, 0, 7);
	return 0;
}