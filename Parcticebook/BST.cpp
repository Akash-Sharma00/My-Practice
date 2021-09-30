#include <iostream>
using namespace std;

struct node
{
    int data;
    node *right;
    node *left;
};

struct node *tmpnode(int x)
{
    struct node *newnode = new node;
    newnode->data = x;
    newnode->left = newnode->right = 0;
    return newnode;
}

struct node *create(struct node *root,int x)
{
    if(root == NULL)
    {
        root = tmpnode(x);
    }
    else if(x <= root->data)
    {
        root->left = create(root->left,x);
    }
    else
    {
        root->right = create(root->right,x);
    }
    return root;    
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

int main()
{
    node *root = NULL;
    int i,x,n;
    //cout<<"\nEnter number of element\t";
    //cin>>n;
    for(;;/*i = 0; i < n; i++*/)
    {
        cout<<"\nEnter -1 to finish Enter the element\t";
        cin>>x;
        if(x == -1)
        {
            break;
        }
        root = create(root,x);
    }
    cout<<"\nInorder is\n";
    inorder(root);
    return 0;
}