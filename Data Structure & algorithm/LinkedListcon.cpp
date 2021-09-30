#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*head = NULL, *q, *t, *start;

void create();
void display();
void sort();


int main()
{
    create();
    display();
    sort();
    display();
    return 0;
}

void create()
{
    int x, i, n;

    cout<<"Enter number of element ";
    cin>>n;

    for(i = 0; i < n; i++)
    {
        cout<<"Enter "<<i+1<<" Element ";
        cin>>x;

        t = new node;
        t->data = x;
        t->next = NULL;

        if(head == NULL)
        {
            start = head = t;
            head->next = NULL;
        }
        else
        {
            q = start;
            while (q->next != NULL)
            {
                q = q->next;
            }
            q->next = t;
        }
    }
}

void display()
{
    
    if(head == NULL)
    {
        cout<<"\nNo element is present in the list";
    }
    else
    {
        cout<<"\nElement in list:\n";
        start = head;
        q = start;
        while (q != NULL)
        {
            cout<<q->data<<"->";
            q = q->next;
        }
        cout<<"NULL\n";
    }
}

void sort()
{
    cout<<"\nAscending sort\n";
    for(q = head; q->next != NULL; q = q->next)
    {
        for(t = q; t != NULL; t = t->next)
        {
            if(q->data > t->data)
            {
                int tep = q->data;
                q->data = t->data;
                t->data = tep;
            }
        }
    }

    display();

    cout<<"\nDescending sort\n";
    for(q = head; q->next != NULL; q = q->next)
    {
        for(t = q; t != NULL; t = t->next)
        {
            if(q->data < t->data)
            {
                int tep = q->data;
                q->data = t->data;
                t->data = tep;
            }
        }
    }
}