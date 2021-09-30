#include <iostream>
#include <vector>
#include <list>
using namespace std;

void add_edge(vector<int> adj[], int  s, int d)
{
    adj[s].push_back(d);
    adj[d].push_back(s);
}

void bfs(vector<int> adj[], int v, int sr, int des,list<int>path,int dist[], bool visited[])
{
    path.push_back(sr);  int c;
    visited[sr] = true;
    dist[sr] = 0;
    list<int> q;
    q.push_back(sr);
    vector<int> :: iterator it;
    while (!q.empty())
    {
        c = q.front();
        q.pop_front();
        for(it = adj[c].begin(); it != adj[c].end(); it++)
        {
            if(visited[*it] == false)
            {
                visited[*it] = true;
                q.push_back(*it);
                path.push_back(*it);
                dist[*it] = dist[c] + 1;
                if(*it == des)
                {
                    return;
                }
            }
        }
    }
}

void shortest(vector<int> adj[],int v, int sr, int des)
{
    int dist[v] = {0};
    bool visited[v] = {false};
    list<int>path;
    bfs(adj,v,sr,des,path,dist,visited);
    list<int> :: iterator li;
    for(li = path.begin(); li != path.end(); li++)
    {
        cout<<*li<<" ";
    }
}

int main()
{
    vector<int> adj[10];
    int v = 8, s, d;
    add_edge(adj, 0, 1);
	add_edge(adj, 0, 3);
	add_edge(adj, 1, 2);
	add_edge(adj, 3, 4);
	add_edge(adj, 3, 7);
	add_edge(adj, 4, 5);
	add_edge(adj, 4, 6);
	add_edge(adj, 4, 7);
	add_edge(adj, 5, 6);
	add_edge(adj, 6, 7);
    shortest(adj,v,0,7);
    return 0;
}