#include <iostream>
#include <map>
#include <list>
using namespace std;

void display(map<int,list<int>>g)
{
    list<int>:: iterator it;
    
    for (int i = 0; i < g.size(); i++)
    {
        for(it = g[i].begin(); it != g[i].end(); it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
}


bool path_finder(int s, map<int, list<int>> g, int d, int source)
{
    list <int> search;
    list<int> :: iterator it;

    int a[g.size()] = {0};
    a[s] = 1;
    a[source] = 1;

    if(s == d)
        return true;
    
    search.push_back(s);


    while (!search.empty())
    {
        s = search.front();
        search.pop_front();
        for (it = g[s].begin(); it != g[s].end(); it++)
        {
            if(a[*it] == 0)
            {
                search.push_back(*it);
                a[*it] = 1;
                if(*it == d)
                    return true;
            }
        }
    }

    return false;
}

void chhota_rasta(map<int,list<int>>g, int s, int d)
{
    list <int> path;
    list <int> trav; 

    list<int> :: iterator itr;
    list<int> :: iterator extra_itr;

    int visited[g.size()] = {0};
    int temp, dist = 0;

    trav.push_back(s);
    path.push_back(s);
    visited[s] = 1;

    if(s == d)
    {
        cout<<"\nSource and destination are same \n";
    }

    while (!trav.empty())
    {
        temp = trav.front();

        for(itr = g[temp].begin(); itr != g[temp].end(); itr++)
        {
            if(visited[*itr] != 1)
            {
                trav.push_back(*itr);
                visited[*itr] = 1;

                if ((path_finder(*itr, g, d, s) == true) and (*itr != d))
                {
                    path.push_back(*itr);
                    dist++;

                    for(extra_itr = g[path.back()].begin(); extra_itr != g[path.back()].end(); extra_itr++)
                    {
                        if(*extra_itr == d)
                        {
                            *itr = d;
                        }
                    }
                }
                if(*itr == d)
                {
                    cout<<"\nLength of path is: "<<++dist;

                    cout<<"\nShoter way is:  ";

                    path.push_back(d);

                    for(itr = path.begin(); itr != path.end(); itr++)
                    {   
                            cout<<*itr<<" ";
                    }
                    return;
                }
            }
        }
        trav.pop_front();
    }
    
}

int main()
{
    map<int,list<int>> graph;

    // graph[0] = {1,3,8};
    // graph[1] = {0,2};
    // graph[2] = {1,0};
    // graph[3] = {0,4,7};
    // graph[4] = {3,5,6};
    // graph[5] = {4,6};
    // graph[6] = {4,5,7};
    // graph[7] = {3,6};
    // graph[8] = {};

    graph[0] = {1,5};
    graph[1] = {0,2,5};
    graph[2] = {1,3,4,5};
    graph[3] = {2,4};
    graph[4] = {2,3,5};
    graph[5] = {0,1,2,4};

    // display(graph);
    chhota_rasta(graph, 0, 4);

    return 0;
}