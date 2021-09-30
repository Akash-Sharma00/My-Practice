#include <iostream>
using namespace std;

int main()
{
    int a[10],t,n,j,i;
    cout<<"\nEnter the length of array ";
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        cout<<"\nEnter element\t";
        cin>>a[i];
    }
    cout<<endl;
    for ( i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    j = n-1;
    for (i = 0; i < n-1; i++)
    {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
        j--;
    }
    cout<<endl;

    for ( i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}