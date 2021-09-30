#include <iostream>

using namespace std;

int create(int st[], int n)
{
    int i,top = -1,x;
    for(i=0;i<n;i++)
    {
        cout<<"\nEnter the value\t";
        cin>>x;    
        top = top + 1;
        st[top] = x;
    }   
    return top;
}

void disp(int st[],int top)
{
    if(top == -1)
    {
        cout<<"\nStack is empty";
        return;
    }
    while(top != -1)
    {
        cout<<st[top]<<"  ";
        top--;
    }
}

int push(int st[], int top)
{
    if(top == 9)
    {
        cout<<"Stack is full";
        return 0;
    }
    int x;
    cout<<"\nEnter the element\t";
    cin>>x;
    st[top+1] = x;
    return top+1;
}

int pop(int st[],int top)
{
    if (top == -1)
    {
        cout<<"Stack is empty";
        return 0;
    }
    int x;
    x = st[top];
    cout<<"\nPoped element is "<<x<<endl;
    top = top - 1;
    return top;
}

int main()
{
    int st[10]={0},n,t;
    cout<<"\nEnter the length\t";
    cin>>n;
    t = create(st,n);
    t = push(st,t);
    t = pop(st,t);
    disp(st,t);
    cout<<"\n";
    /*for(int i=0; i<=9; i++)
    {
        cout<<st[i];
    }*/
    return 0;
}