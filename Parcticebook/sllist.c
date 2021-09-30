#include <conio.h>
#include <malloc.h>
#include <stdio.h>
#include <process.h>

struct node
{
    int data;
    struct node *next;
} *start = NULL,*q, *tmp;

void create();
void display();
void addatbeg();
void addatend();
void addatpos();
void del();
void search();
void count();

int main()
{
    int ch;
    do
    {
        printf("\n\n1-Create\n2-Display\n3-Add at Begning\n4-Add at end\n5-Add at any position\n6-Delete\n7-Search\n8-Count\n9-Exit\nEnter your choice\t");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                create();
                break;
            }
            case 2:
            {
                display();
                break;
            }
            case 3:
            {
                addatbeg();
                break;
            }
            case 4:
            {
                addatend();
                break;
            }
            case 5:
            {
                addatpos();
                break;
            }
            case 6:
            {
                del();
                break;
            }
            case 7:
            {
                search();
                break;
            }
            case 8:
            {
                count();
                break;
            }
            case 9:
            {
                exit(0);
                break;
            }
            default :
            {
                printf("Invalide input");
            }
        }
    }while(ch!=9);
    return 0;
}

void create()
{
    int i,n,x;
    printf("\nEnter the number of element\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the value of element");
        scanf("%d",&x);
        tmp = (struct node*) malloc(sizeof(struct node*));
        tmp-> data = x;
        tmp->next = NULL;
        if(start == NULL)
        {
            start = tmp;
        }
        else
        {
            q = start;
            while(q->next !=NULL)
            {
                q = q->next;
            }  
            q->next = tmp;
        }
    }
}

void search()
{
    int x,n=0;
    if(start == NULL)
    {
        printf("\nList is empty");
        return;
    }
    printf("\nEnter the value to search\t");
    scanf("%d",&x);
    q = start;
    while(q->next!= NULL)
    {
        if(q->data == x)
        {
            n++;
            printf("\nElement found at %d",n);
            return;
        }
        else
        {
            q = q->next;
            n++;
        }
    }
    printf("\nElement not found");    
}

void count()
{
    int c=1;
    if(start==NULL)
    {
        printf("\nList is empty");
        return;
    }
    q = start;
    while(q->next!=NULL)
    {
        q = q->next;
        c++;
    }
    printf("\nThere are %d element in list",c);
}

void display()
{
    int i;
    if(start == NULL)
    {
        printf("\nList is emty");
        return;
    }
    else
    {
        q = start;
        while(q != NULL)
        {
            printf("%d->",q->data);
            q = q->next;
        }
        printf("NULL");
    }
}

void addatpos()
{
    int x,n,i;
    printf("\nEnter your position\t");
    scanf("%d",&n);
    q = start;
    for(i=1; i<n-1;i++)
    {
        if(start==NULL)
        {
            printf("\nLess number in list");
            return;
        }
        else
        {
            q = q->next;
        }    
    }    
    printf("\nEnter the value of element\t");
    scanf("%d",&x);
    tmp = (struct node*)malloc(sizeof(struct node*));
    tmp->data=x;
    tmp->next = q->next;
    q->next = tmp;
}    

void del()
{
    int x;
    
    if(start == NULL)
    {
        printf("\nList is empty");
        return;
    }
    printf("\nEnter the value to be deleted\t");
    scanf("%d",&x);
    if(start-> data == x)
    {
        tmp = start;
        start = start->next;
        free(tmp);
    }
    q = start;
    while(q->next != NULL)
    {
        if(q->next->data == x)
        {
            tmp = q->next;
            q->next=tmp->next;
            return;
        }
        else
        {
            {
                q = q->next;
            }
        }
        printf("\nNumber is not found");
    }
}

void addatbeg()
{
    int x;
    printf("\nEnter the value of element\t");
    scanf("%d",&x);
    tmp = (struct node*) malloc(sizeof(struct node*));
    tmp->data = x;
    tmp->next = start;
    start = tmp;
}

void addatend()
{
    int x;
    printf("\nEnter Value of element\t");
    scanf("%d",&x);
    tmp = (struct node*)malloc(sizeof(struct node*));
    tmp->data = x;
    tmp->next = NULL;
    q = start;
    while(q->next!=NULL)
    {
        q = q->next;
    }
    q->next = tmp;
}