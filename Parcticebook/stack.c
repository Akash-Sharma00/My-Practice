#include <conio.h>
#include <process.h>
#include <stdio.h>
#include <malloc.h>
#include <process.h>

struct node
{
    int data;
    struct node *next;  
} *top = NULL,*q,*tmp;

int main()
{
    int ch,i,x,n;

    do
    {
        printf("\n1-create\n2-display\n3-PUSH\n4-POP\n5-Exit\nEnter your choice\t");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
            {
                printf("\nEnter number of element\t");
                scanf("%d",&n);

                for(i=0;i<n;i++)
                {
                    printf("\nEnter your element\t");
                    scanf("%d",&x);

                    tmp = (struct node*) malloc(sizeof(struct node *));   
                    tmp->data = x;
                    if(top == NULL)
                    {
                        tmp->next = NULL;
                    }
                    else
                    {
                        tmp->next = top;
                    }
                    top = tmp;
                }
                break;
            }
            case 2:
            {
                if(top == NULL)
                    {
                        printf("\nStack is empty");
                        break;
                    }
                q = top;
                printf("\n");
                while(q != NULL)
                {
                    printf("%d->",q->data);
                    q = q->next;
                }
                printf("NULL");
                break;
            }
            case 3:
            {
                printf("\nEnter the value of element\t");
                scanf("%d",&x);
                tmp = (struct node*)malloc(sizeof(struct node*));
                tmp->data = x;
                tmp->next = top;
                top = tmp;
                break;
            }
            case 4:
            {
                if(top == NULL)
                {
                    printf("\nStack is empty");
                    break;
                }
                tmp = top;
                printf("\nPopped element is %d",tmp->data);
                top = tmp->next;
                free(tmp);
                break;
            }
            case 5:
            {
                exit(0);
                break;
            }
            default:
            {
                printf("\nINVALIDE INPUT!!!!!");
                break;
            }
        }
    } while (ch != 5);
    return 0;
}