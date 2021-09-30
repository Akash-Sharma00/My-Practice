#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
}*start = NULL,*q,*t;

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
        t->next =NULL;
        if(start == NULL)
        {
           start = t;
          // start->next = start;
           //cout<<"\n"<<start->next->data;
        }
        else
        {
           q = start;
           //t->next = start;
           while(q->next != NULL)
           {
               q = q->next;
           }
           q->next = t;
        }
        //t->next = start;
    }
    t->next = start;
    //cout<<"\nLAst data is "<<q->next->data;
}

void display()
{
    q = start;
    while(q->next != start)
    {
        cout<<q->data<<"->";
        q = q->next;
    }
    cout<<q->data<<"->";
    cout<<"NULL"<<"\n"<<q->next->data;
    //cout<<"\n"<<q->next->data;
}
void add_at_pos()
{
    int i,n,x;

    if(start == NULL)
    {
        cout<<"\nList is empty";
        return;
    }
    else
    {
        cout<<"\nEnter the position\t";
        cin>>n;
        q = start;
        for(i=1;i<n-1;i++)
        {
            q = q->next;
            if(q == NULL)
            {
                cout<<"\nList is small for your position\n";
                return;
            }
        }
        cout<<"\nEnter your element\t";
        cin>>x;
        t = new node();
        t->data = x;
        t->next = q->next;
        q->next = t;
    }
    
}
int main()
{
    create();
    display();
    add_at_pos();
    display();
    return 0;
}