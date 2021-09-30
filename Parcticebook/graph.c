#include <conio.h>
#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
};

void read(struct node *ad[], int n);
void trav(struct node *ad[], int n);
void bfs(struct node *ad[],int n);

void main()
{
    int i,j,k,node;
    printf("\nEnter nodes\t");
    scanf("%d",&node);
    struct node *adj[node];
    for(i=0;i<node;i++)
    {
        adj[i]=NULL;
    }
    read(adj,node);
    trav(adj,node);
}

void read(struct node *ad[], int n)
{
    struct node *new_node;
    int i,j,k,val;
    for(i=0;i<n;i++)
    {
        struct node *last = NULL;
        printf("\nEnter the adjacent node of %d\t",i+1);
        scanf("%d",&k);
        for(j=0;j<k;j++)
        {
            printf("\nEnter the value of %d adjancent of %d\t" ,j+1,i+1);
            scanf("%d",&val);
            new_node = (struct node*)malloc(sizeof(struct node*));
            new_node->data=val;
            new_node->next=NULL;
            if(ad[i]==NULL)
            {
                ad[i] = new_node;
            }
            else
            {
                last->next = new_node;
            }
            last = new_node;
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
        printf("\nThe adjacent of %d are: ",i+1);
        while(ptr != NULL)
        {
            printf("%d  ",ptr->data);
            ptr = ptr->next;
        }
    }
}

/*void bfs(struct node *ad[],int n)
{
    int i;
    struct node *q;
    q = (struct node *)malloc(sizeof(struct node));
    for(i=0;i<n;i++)
    {
        q->data = ad[i];
        
    }
}*/