#include <conio.h>
#include <stdio.h>
#include <malloc.h>
#include <process.h>

struct node
{
    int data;
    struct node *next;
}*start=NULL,*q,*tmp;

void create();
void display();
void addbeg();
void addend();
void addpos();
void delete1();

void main()
{
    int ch;
    printf("\n1-create\n2-Display\n3-Add at Begning\n4-Add at end\n5-Add at position\n6-Delete\n7-Exit\nEnter your choice \t");
    scanf("%d",&ch);

    do
    {
        switch (ch)
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
                addbeg();
                break;
            }
            case 4:
            {
                addend();
                break;
            }
            case 5:
            {
                addpos();
                break;
            }
            case 6:
            {
                delete1();
                break;
            }
            case 7:
            {
                exit(0);
                break;
            }
            default:
            {
                printf("\nInvalid Input!!!!!");
                break;
            }
        }
    } while (ch != 7);  
}

void create()
{
    int x,n,i;

    printf("\nEnter the number of nodes \t");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter the element\t");
        scanf("%d",&x);

        tmp = (struct node*)malloc(sizeof(struct node*));
        tmp->data=x;
        tmp->next=NULL;
        if(start == NULL)
        {
            start = tmp;
        }
        else
        {
            q = start;
            while(q->next != NULL)
            {
                q = q->next;
            }
            q->next = tmp;   
        }
    }
}

void display()
{
    if(start == NULL)
    {
        printf("\nList is empty");
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

void addbeg()
{
    int x;
}

void addend()
{
    int x;
}

void addpos()
{
    int x;
}

void delete1()
{
    int x;
}
