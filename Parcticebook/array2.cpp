#include <iostream>
using namespace std;


int main()
{
    int a[10], i, n, k, max, min;

    cout<<"\nEnter the length of element\t";
    cin>>n;

    for ( i = 0; i < n; i++)
    {
        cout<<"\nEnter element\t";
        cin>>a[i];
    }

    cout<<"\nEnter kth position\t";
    cin>>k;
    cout<<endl;

    for ( i = 0; i < n; i++)
    {
        for (int j = i; j < n-1 ; j++)
        {
            if (a[i]>a[j+1])
            {
                int t = a[i];
                a[i] = a[j+1];
                a[j+1] = t;
            }
        }   
    }
    
    for ( i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n"<<k<<" Max number is "<<a[k-1];
    
    return 0;
}