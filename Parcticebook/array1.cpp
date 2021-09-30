#include <iostream>

using namespace std;

int main()
{
    int A[10], i, n, max, min;
    cout<<"Enter the length of array\t";
    cin>>n;

    for(i=0; i<n; i++)
    {
        cout<<"\nEnter Your "<<i<<" elements\t";
        cin>>A[i];
    }
    cout<<"\n";
    for(i=0; i<n; i++)
    {
        cout<<" "<<A[i];
    }
    cout<<"\n";
    for(i=n-1; i>=0;i--)
    {
        cout<<" "<<A[i];
    }
    cout<<"\n*****************************************************";
    max = A[0];
    min = A[0];
    for(i=1; i<n; i++)
    {
        if (max < A[i])
        {
            max = A[i];
        }
        if(min > A[i])
        {
            min = A[i];
        }
    }
    cout<<"\nMax is "<<max<<"\nMin is "<<min;
    return 0;
}