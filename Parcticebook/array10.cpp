//Programe to separate negative and positive number
#include <iostream>
using namespace std;

int main()
{
    int a[10], n, i;

    cout<<"\nEnter the length of array\t";
    cin>>n;

    for ( i = 0; i < n; i++)
    {
        cout<<"\nEnter element  ";
        cin>>a[i];
    }

    for ( i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if(a[j] < 0)
            {
                int t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
        }
        
    }

    for ( i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}