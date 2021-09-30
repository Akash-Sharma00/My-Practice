#include <iostream>
using namespace std;

int main()
{
    int a[10],n,i,j,t;
    cout<<"\nEnter the length of array\t";
    cin>>n;

    for ( i = 0; i < n; i++)
    {
        cout<<"\nEnter the value\t";
        cin>>a[i];
    }

    for(i = 1; i < n; i++)
    {
        t = a[i];
        j = i-1;
        while (j >= 0 && a[j] > t)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = t;        
    }

    cout<<"\nAcending order\n";
    for ( i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    return 0;
}