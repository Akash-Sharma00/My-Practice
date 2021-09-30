#include <iostream>
#include <conio.h>

using namespace std;

struct node
{
    int data;
    struct node *next;
} *first = NULL,*t,*q;

void create()
{
    int n,i,x;
    cout<<"\nEnter the number of element\t";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\nEnter the elements\t";
        cin>>x;
        t = new node;
        t->data = x;
        t->next = NULL;
        if(first == NULL)
        {
            first = t;
        }
        else
        {
            q = first;
            while(q->next!=NULL)
            {
                q = q->next;
            }
            q->next = t;
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
            cout<<q->data<<"->";
            q = q->next;
        }
        cout<<"NULL";
    }
}

void add_at_begning()
{
    int x;
    cout<<"\nEnter the element to add at first position\t";
    cin>>x;
    t = new node;
    t->data=x;
    t->next=first;
    first = t;   
}

void add_at_end()
{
    int x;
    cout<<"\nEnter the element to add at end\t";
    cin>>x;
    t = new node();
    t->data = x;
    t->next = NULL;
    q = first;
    while(q->next != NULL)
    {
        q = q->next;
    }
    q->next = t;
}

void add_at_pos()
{
    int i,n,x;

    if(first == NULL)
    {
        cout<<"\nList is empty";
        return;
    }
    else
    {
        cout<<"\nEnter the position\t";
        cin>>n;
        q = first;
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

void search_data()
{
    int i ,x ,c=1;
    if(first == NULL)
    {
        cout<<"\nlist is empty";
        return;
    }
    cout<<"\nEnter element to search\t";
    cin>>x;
    q = first;
    while (q != NULL)
    {
        if(q->data == x)
        {
            cout<<"\nElement found at "<<c;
            q = q->next;
            c++;
            return;
        }
        c++;
        q = q->next;
    }
    cout<<"\nElement not found";
}

void delete_data()
{
    int i,n;
    if(first == NULL)
    {
        cout<<"\nList is empty";
        return;
    }
    cout<<"\nEnter the position to delete data\t";
    cin>>n;
    q = first;
    for(i=1;i<n-1;i++)
    {   
        q = q->next;
        if(q == NULL)
        {
            cout<<"\nList is small\n";
        }
    }
    t = q->next;
    cout<<"Deleted element is  "<<t->data<<endl;
    q->next = t->next;
    delete(t);
}

int main()
{
    create();
    display();
    //add_at_begning();
    //add_at_end();
    //add_at_pos();
    //search_data();
    delete_data();
    display();
    getch();
    return 0;
}