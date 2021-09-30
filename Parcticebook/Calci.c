#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a, b, r;
    int ch;

    do
    {
        printf("\n1-Addtion\n2-Subtraction\n3-Multipy\n4-Divide\n5-Exit\nEnter your coice\n");
        scanf("%d", &ch);

        system("CLS");

        switch (ch)
        {

        case 1:
        {
            printf("\nEnter first number:- ");
            scanf("%d", &a);
            printf("\nEnter Second number:- ");
            scanf("%d", &b);
            r = a + b;
            printf("\n*************\nResult is %d\n*************\n", r);
            break;
        }
        case 2:
        {
            printf("\nEnter first number:- ");
            scanf("%d", &a);
            printf("\nEnter Second number:- ");
            scanf("%d", &b);
            r = a - b;
            printf("\n*************\nResult is %d\n*************\n", r);
            break;
        }
        case 3:
        {
            printf("\nEnter first number:- ");
            scanf("%d", &a);
            printf("\nEnter Second number:- ");
            scanf("%d", &b);
            r = a * b;
            printf("\n*************\nResult is %d\n*************\n", r);
            break;
        }
        case 4:
        {
            printf("\nEnter first number:- ");
            scanf("%d", &a);
            printf("\nEnter Second number:- ");
            scanf("%d", &b);
            r = a / b;
            printf("\n*************\nResult is %d\n*************\n", r);
            break;
        }
        case 5:
        {
            printf("\n*************\nThank you\n*************\n");
            break;
        }
        default:
        {
            printf("\n*************\nWrong input!!!!\n*************\n");
        }
        }
    } while (ch != 5);
}