#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next,*prev;
}*first=NULL,*t,*q;

void create()
{
    int i,n,x;
    cout<<"\nEnter the number of element";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\nEnter the element\t";
        cin>>x;
        t = new node;
        t->data=x;
        t->prev = NULL;
        t->next = NULL;
        if(first == NULL)
        {
            first = t;
        }
        else
        {
            q = first;
            while(q->next != NULL)
            {
                q = q->next;
            }
            q->next = t;
            q->prev = q;
        }
        
    }
}

void display()
{
    if(first == NULL)
    {
        cout<<"\nList is empty";
        return;
    }
    else
    {
        q = first;
        while( q != NULL)
        {
            cout<<q->data<<"<=>";
            q = q->next;
        }
        cout<<"NULL";
    }
}


void search_data()
{
    int x,c=1;
    if(first == NULL)
    {
        cout<<"\nList is empty";
        return;
    }
    cout<<"\nEnter element to search\t";
    cin>>x;
    q = first;
    while(q != NULL)
    {
        if(q->data == x)
        {
            cout<<"\nElement found at "<<c;
            return;
        }
        q = q->next;
        c++;
    }
}

void add_at_pos()
{
    int n,x,i;
    cout<<"\nEnter the position\t";
    cin>>n;
    cout<<"\nEnter the element\t";
    cin>>x;
    t = new node;
    t->data=x;
    q = first;
    for(i=1;i<n-1;i++)
    {
        q = q->next;
    }
    t->next = q->next;
    t->prev = q;
    q->next = t;
}

void delete_data()
{
    int x;
    cout<<"\nEnter the element to delete\t";
    cin>>x;
    q = first;
    while(q != NULL)
    {
        if(q->data == x)
        {
            t = q->next;
            first = t;
            delete(t);
            return;
        }
        if(q->next->data == x)
        {
            t = q->next;
            q->next = t->next;
            free(t);
        }
        q= q->next;
        return;
    }
    cout<<"\nElement not found";
}

int main()
{
    create();
    //search_data();
    //add_at_pos();
    display();
    delete_data();
    display();
    return 0;
}