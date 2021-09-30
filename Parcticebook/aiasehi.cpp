#include <iostream>
#include <list>
#include <map>
#include <stack>
using namespace std;

class topsort{
    private:
    list <int> graph[10];
    int v;
    public:

    topsort(int s)
    {
        v = s;
    }
    void add_edge(int s, int e)
    {
            graph[s].push_back(e);
    }

    void disp()
    {
        list <int> :: iterator it;
        for (int i = 0; i < v; i++)
        {
            cout<<i<<"->";
            for ( it = graph[i].begin(); it != graph[i].end(); it++)
            {
                cout<<*it<<" ";
            }
            cout<<endl;
        }
    }
    void tsitr(int v,bool visited[],stack<int>&ts);
    void topologicalsort();
};

void topsort :: tsitr(int V, bool visited[], stack<int>& ts)
{
    visited[V] = true;
    list<int> :: iterator it;
    for ( it = graph[V].begin(); it != graph[V].end(); it++)
    {
        if (visited[*it] == false)
        {
            tsitr(*it,visited,ts);
        }
    }
    ts.push(V);
}

void topsort :: topologicalsort()
{
    bool visited[v] = {false};
    stack <int>ts;

    for (int i = 0; i < v; i++)
    {
        if(visited[i] == false)
        {
            tsitr(i,visited,ts);
        }
    }
    while (ts.empty() == false)
    {
        cout<<ts.top()<<" ";
        ts.pop();
    }
}

int main()
{
    topsort t(3);
    t.add_edge(0, 1);
    t.add_edge(1, 2);
    // t.add_edge(4, 0);
    // t.add_edge(4, 1);
    // t.add_edge(2, 3);
    // t.add_edge(3, 1);
    t.disp();
    cout<<"*****************\n";
    t.topologicalsort();
    return 0;
}