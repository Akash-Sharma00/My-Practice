#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *left,*right;
};

struct node *create_tree()
{
    int x;
    struct node *t;
    t = new node;
    cout<<"\nEnter -1 if no node is present\tEnter node";
    cin>>x;
    if(x == -1)
    {
        return 0;
    }
    t->data = x;
    cout<<"\nEnter the left child of "<<x;
    t->left = create_tree();
    cout<<"\nEnter the right child of "<<x;
    t->right = create_tree();
    return t;
}

void inorder(struct node *root)
{
    if(root == 0)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
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
    cout<<root->data<<" ";

}

void preorder(struct node *root)
{
    if(root == 0)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}


int main()
{
    struct node *root=NULL;
    root = create_tree();
    cout<<"\nInoeder is \n";
    inorder(root);
    cout<<"\nPostorder is \n";
    postorder(root);
    cout<<"\nPreorder is \n";
    preorder(root);
    return 0;
}