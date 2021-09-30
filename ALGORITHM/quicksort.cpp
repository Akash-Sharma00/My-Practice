#include <iostream>
using namespace std;

void swap(int a[],int x, int y)
{
    int t;
    t = a[x];
    a[x] = a[y];
    a[y] = t;
}

int split(int a[],int lb, int ub)
{
    int pivot = a[lb];
    int end = ub;
    int start = lb;

    while (start < end)
    {
        while (a[start] <= pivot)
        {
            start++;
        }
        while (a[end] > pivot)
        {
            end--;
        }
        if(start < end)
        {
            swap(a,start,end);
        }
    }
    swap(a,lb,end);
    return end;
}

void quick_sort(int a[],int lb,int ub)
{
    if(lb < ub)
    {
        int loc = split(a,lb,ub);
        quick_sort(a,lb,loc-1);
        quick_sort(a,loc+1,ub);
    }
}

int main()
{
    int n;
    cout<<"\nEnter the length\t";
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"\nEnter the value\t";
        cin>>a[i];
    }
    quick_sort(a,0,n-1);
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}