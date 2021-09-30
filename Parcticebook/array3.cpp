#include <iostream>
using namespace std;
int main()
{
int i,n;
cout<<"\nEnter size of array\t";
cin>>n;
int a[10];
for(i = 0; i < n; i++)
{
    cout<<"\nEnter elements\t";
    cin>>a[i];
}
for (i = 0; i < 2; i++)
{
    
    //if (i >= 10)
    //{
     //   system("cls");
      //  i = 0;
   // }
    //else
    //{
    int t = a[i];
    a[n-(i-1)] = a[i];
    a[n-(i-1)] = t;
   // cout<<a[i]<<" ";
    //}
}
for ( i = 0; i < n; i++)
{
    cout<<a[i]<<" ";
}

return 0;
}