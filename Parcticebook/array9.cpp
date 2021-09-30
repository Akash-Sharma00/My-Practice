//Sort a array consist only 0,1,2
#include <iostream>
using namespace std;

int main()
{
    int a[10], n, i, z = 0, o = 0,t = 0;

    cout<<"\nEnter the length of array\t";
    cin>>n;

    for ( i = 0; i < n; i++)
    {
        cout<<"\nEnter element  ";
        cin>>a[i];
    }
    

    for ( i = 0; i < n; i++)
    {
        if(a[i] == 0)
        {
            z++;
        }
        else if(a[i] == 1)
        {
            o++;
        }
        else{
            t++;
        }
    }

    for(i = 0; i < n; )
    {
        while (z > 0)
        {
            a[i] = 0;
            i++;
            z--;
        }

        while (o > 0)
        {
            a[i] = 1;
            i++;
            o--;
        }

        while (t > 0)
        {
            a[i] = 2;
            i++;
            t--;
        }
        
    }

    
    for ( i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}