#include <iostream>
#include<vector>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void create(struct node*gl[],int n);
void trav(struct node *gl[],int n);
void bfs(struct node *gl[],int x,int n);

int main()
{
    int i,n;
    cout<<"\nEnter the number of vertices\t";
    cin>>n;
    struct node *gl[n];
    for ( i = 0; i < n; i++)
    {
        gl[i] = NULL;
    }

    create(gl,n);
    trav(gl,n);
    bfs(gl,1,n);

    return 0;
}

void create(struct node *gl[],int n)
{
    struct node *temp;
    int i,j,k,x;

    for (i = 0; i < n; i++)
    {
        struct node *q=NULL;
        cout<<"\nEnter the adjacent vertices of "<<i+1<<"\t";
        cin>>k;

        for ( j = 0; j < k; j++)
        {
            cout<<"\nEnter value of "<<j+1<<" adjacent of "<<i+1<<"\t";
            cin>>x;

            temp = new node;
            temp->data = x;
            temp->next = NULL;

            if(gl[i] == NULL)
            {
                gl[i] = temp;
            }
            else
            {
                q->next = temp; 
            }
            q = temp;
        }
    }
}

void trav(struct node *ad[], int n)
{
    struct node *ptr=NULL;
    int i,j;
    for(i=0;i<n;i++)
    {
        ptr = ad[i];
        cout<<"\nThe adjacent of "<<i+1<<" are: ";
        while(ptr != NULL)
        {
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
    }
}

void bfs(struct node *gl[],int x,int n)
{
    vector<int>q;
    vector<int> :: iterator it;
    int a[n] = {0};
    a[x] = 1;
    q.push_back(x);
    while (!q.empty())
    {
        int s = q.front();
        cout<<s<<" ";
        for (int i = x; i < n; i++)
        {
            if(a[i] == 0)
            {
                cout<<" ";
            }
        }
    }
}