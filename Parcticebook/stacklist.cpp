#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
}*top=NULL,*q,*t;

void create()
{
    int i,n,x;
    cout<<"\nEnter the number of element\t";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\nEnter the value of element\t";
        cin>>x;
        t = new node;
        t->data = x;
        t->next = NULL;
        if (top == NULL)
        {
            top = t;
        }
        else
        {
            t->next = top;
            top = t;
        }
    }
    cout<<top->data;
}


void disp()
{
    if(top == NULL)
    {
        cout<<"\nStack is empty";
        return;
    }
    else
    {
        q = top;
        while (q != NULL)
        {
            cout<<q->data<<"->";
            q = q->next;
        }
        cout<<"NULL";
    }   
}

void push()
{
    if(top == NULL)
    {
        cout<<"\nStack is empty";
        return;
    }
    int x;
    cout<<"\nEnter element to push";
    cin>>x;
    t = new node;
    t->data =x;
    t->next = NULL;
    t->next = top;
    top = t;
}

void pop()
{
    if(top == NULL)
    {
        cout<<"\nStack is empty";
        return;
    }
    int x = top->data;
    cout<<"\nPopped element is "<<x<<"\n";
    q  = top;
    top = top->next;
    free(q);
}

int main()
{
    create();
    //push();
    pop();
    disp();
    return 0;
}