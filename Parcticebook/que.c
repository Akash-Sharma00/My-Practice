#include <conio.h>
#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;    
} *rear = NULL,*front = NULL, *tmp,*q;

void main()
{
    int x,i,n;
    printf("\nEnter the number of element\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the element\t");
        scanf("%d",&x);
        tmp = (struct node*)malloc(sizeof(struct node*));
        tmp->data = x;
        tmp->next=NULL;
        if(front == NULL && rear == NULL)
        {
            front = rear = tmp;
        }
        else
        {
            rear->next = tmp;
            rear = tmp;
        }
        
    }

    q = front;
    while(q != NULL)
    {
        printf("%d->",q->data);
        q = q->next;
    }
    printf("NULL");

    printf("\nEnter element to be insert\t");
    scanf("%d",&x);
    tmp = (struct node*)malloc(sizeof(struct node*));
    tmp->data=x;
    tmp->next=NULL;
    rear->next = tmp;
    rear = tmp;
    q = front;
    while(q != NULL)
    {
        printf("%d->",q->data);
        q = q->next;
    }
    printf("NULL");
}