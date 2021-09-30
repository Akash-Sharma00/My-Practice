#include <conio.h>
#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *left,*right;
};

struct node *create()
{
    int x;
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node*));
    printf("\nEnter node Enter -1 for no node\t");
    scanf("%d",&x);
    if(x==-1)
    {
        return 0;
    }
    newnode->data = x;
    printf("\nEnter right child of %d\t",x);
    newnode->right=create();
    printf("\nEnter left child of %d\t",x);
    newnode->left=create();
    return newnode;
}

void preorder(struct node *root)
{
    if(root==0)
    {
        return;
    }
    else
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct node *root)
{
    if(root==0)
    {
        return;
    }
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}

void postorder(struct node *root)
{
    if(root == 0)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}
void main()
{
    struct node *root;
    root = NULL;
    root = create();
    printf("\n\nIn order is \n");
    inorder(root);
    printf("\n\nPre order is\n");
    preorder(root);
    printf("\n\nPost order is\n");
    postorder(root);
}