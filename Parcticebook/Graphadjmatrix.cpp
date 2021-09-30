#include <iostream>
#include <conio.h>
#include <queue>
using namespace std;

void add_edge(int a[10][10],int p,int q)
{
    a[p][q] = 1;
    //a[q][p] = 1;
}

int main()
{
    int a[10][10]={0},i,n,x,y,k;

    cout<<"\nEnter the vertices of graph\t";
    cin>>n;


    for ( i = 1; i <= n; i++)
    {
        cout<<"\nEnter the edge of "<<i<<"  ";
        cin>>k;
        cout<<"\nEnter all adjacent\n";
        for (int j = 1; j <= k; j++)
        {
            cin>>y;
            add_edge(a,i,y);
        }
    }
 
    cout<<"  ";
    for ( i = 1; i <= n; i++)
    {
        cout<<i<<" ";
    }
 
    cout<<"\n";
    
    for ( i = 1; i <= n; i++)
    {
        cout<<i<<" ";
        for (int j = 1; j <= n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    getch();
    return 0;
}