#include <iostream>
using namespace std;

int main()
{
    int a[10],x,j,i,n,t;
    cout<<"\nEnter the length of array\t";
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        cout<<"\nEnter the value\t";
        cin>>x;
        a[i] = x;
    }

    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    cout<<endl;
    cout<<"\nAscending order"<<endl;
    for ( i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }

    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-i-1; j++)
        {
            if(a[j] < a[j+1])
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    cout<<endl<<"\nDecending order\n";
    for ( i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}