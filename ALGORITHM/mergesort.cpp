#include <iostream>
using namespace std;

void merge(int a[],int m1,int l, int h1)
{
    int n1 = m1 - l +1;
    int n2 = h1 - m1;

    int x[n1],y[n2];

    for ( int i = 0; i < n1; i++)
    {
        x[i] = a[l + i];
    }

    for (int j = 0; j < n2; j++)
    {
        y[j] = a[m1+j+1];
    }
    
     int i = 0, j = 0, k = l;

     while (i < n1 && j < n2) 
    {
		if (x[i] <= y[j])
        {
			a[k] = x[i];
			i++;
		}
		else 
        {
			a[k] = y[j];
			j++;
		}
		k++;
	}

    while (i < n1) 
    {
		a[k] = x[i];
		i++;
		k++;
	}

    while (j < n2) 
    {
		a[k] = y[j];
		j++;
		k++;
	}
}

void split(int a[], int l, int h)
{
    int mid = (l+h)/2;
    if (l < h)
    {
        split(a,l,mid);
        split(a,mid+1,h);
        merge(a,mid,l,h);
    }
}

int main()
{
    int a[10],n;
    cout<<"\nEnter the length of array\t";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"\nEnter the element\t";
        cin>>a[i];
    }
    split(a,0,n-1);
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    return 0;
}