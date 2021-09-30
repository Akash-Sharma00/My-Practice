#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
}*front = NULL,*rear = NULL ,*t,*q;

void create()
{
    int i,n,x;
    cout<<"\nEnter the length\t";
    cin>>n;
    for(i = 0; i < n; i++)
    {
        cout<<"\nEnter the element\t";
        cin>>x;
        t = new node;
        t->data = x;
        t->next = NULL;
        if(front == NULL && rear == NULL)
        {
            front = rear = t;
        }
        else
        {
            q = rear;
            while( q->next != NULL)
            {
                q= q->next;
            }
            q->next = t;
            rear = q->next;
        }
    }
}

void display_q()
{
    if(front == NULL)
    {
        cout<<"\nQueqe is empty";
        return;
    }
    else
    {
        q = front;
        while (q != NULL)
        {
            cout<<q->data<<"->";
            q = q->next;
        }
        cout<<"NULL"<<endl;
    }
    
}

void add_rear()
{
    int x;
    cout<<"\nEnter the element\t";
    cin>>x;
    t = new node;
    t->data = x;
    t->next = NULL;
    q = front;
    while (q->next != NULL)
    {
        q = q->next;;
    }
    q->next = t;
    rear = q->next;
}

void pop_data()
{
    t = front;
    cout<<"\nDeleted data is "<<front->data<<endl;;
    front = front->next;
    free(t);
}

int main()
{
    create();
    cout<<"\nRear is  "<<rear->data;
    add_rear();
    cout<<"\nRear is  "<<rear->data;
    cout<<"\nFront is  "<<front->data;
    pop_data();
    display_q();
    return 0;
}