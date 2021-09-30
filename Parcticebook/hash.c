#include <conio.h>
#include <stdio.h>

void main()
{
    int ht[10]={0},n,i,index,x;
    printf("\nEnter the number of element\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter element\t");
        scanf("%d",&x);
        index = x%10;
        if(ht[index]!=0)
        {
            while (ht[index]!=0)
            {
                index++;
                if(index > 9)
                {
                    index = 0;
                }
            }
            ht[index]=x;
        }
        else
        {
            ht[index]=x;
        }
        
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",ht[i]);
    }
    printf("\nEnter number for search\t");
    scanf("%d",&x);
    index = x%10;
    while(ht[index] != 0)
    {
        if(index>9)
        {
            index = 0;
        }
        if(ht[index]==x)
        {
            printf("\nNumber at %d",++index);
        }
        index++;
    }
}