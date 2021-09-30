#include <iostream>
using namespace std;

int main()
{
    int a[10],n,i,j,min;

    cout<<"\nEnter the length of array\t";
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        cout<<"\nEnter the value\t";
        cin>>a[i];
    }
    
    //Acending order
    for ( i = 0; i < n-1; i++)
    {
        min = i;
        for (j = i+1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
            
        }
        if (min != i)
        {
            int t;
            t = a[i];
            a[i] = a[min];
            a[min] = t;
        }
        
    }
    cout<<endl<<"Acending order\n";
    for ( i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }

    ///Deceding oeder
    for ( i = 0; i < n-1; i++)
    {
        min = i;
        for (j = i+1; j < n; j++)
        {
            if (a[j] > a[min])
            {
                min = j;
            }
            
        }
        if (min != i)
        {
            int t;
            t = a[i];
            a[i] = a[min];
            a[min] = t;
        }
        
    }
    cout<<endl<<"\nDecending order\n";
    for ( i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}