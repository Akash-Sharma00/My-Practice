//Rotate an array one by one
#include <iostream>
using namespace std;

void rotate(int a[],int n)
{
    int t = 0, i;

    for(i = 0; i < 1; i++)
    {
        for(int j = i; j < n-1; j++)
        {
            t = a[j];
            a[j] = a[j+1];
            a[j+1] = t;
        }
    }
}

int main()
{
    int a[10],n,i,r = 1;

    cout<<"\nEnter length ";
    cin>>n;

    for(i = 0; i < n; i++)
    {
        cout<<"\nEnter element ";
        cin>>a[i];
    }

    while(r == 1)
    {
        cout<<"\nEnter 1 to rotate";
        cin>>r;    
        rotate(a,n);

        for(i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}