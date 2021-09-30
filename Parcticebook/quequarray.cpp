#include <iostream>

using namespace std;

void create_queqe(int a[], int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        cout<<"\nEnetr the element\t";
        cin>>a[i];
    }
}

void disp_queqe(int a[],int n)
{
    cout<<endl;
    for (int i = 0; a[i] != 0; i++)
    {
        if(a[i] == 0)
            break;
            
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

void pop_queqe(int a[],int n)
{
    int i;
    if(a[0] == 0)
    {
        cout<<"\nQueqe is empty";
        return;
    }
    cout<<"\nPopped element is "<<a[0];
    for ( i = 0; i < n-1; i++)
    {
        a[i] = a[i+1];
    }
    a[i] = 0;
}

void append_queqe(int a[],int n)
{
    int x;
    if(a[9] != 0)
    {
        cout<<"\nQueqe is full\t";
        return;
    }
    cout<<"\nEnter the element\t";
    cin>>x;
    for (int i = 0; i < 9; i++)
    {
        if(a[i] == 0)
        {
            a[i] = x;
            break;
        }
    }
    
}

int main()
{
    int a[10]={0},i,n;
    //i:
    cout<<"\nEnter the length of queqe\t";
    cin>>n;
    //goto n;
    create_queqe(a,n);
    disp_queqe(a,n);
    pop_queqe(a,n);
    //disp_queqe(a,n);
    //append_queqe(a,n);
    disp_queqe(a,n);

    //goto i;
   //n: cout<<"Out of goto";
    return 0;
}