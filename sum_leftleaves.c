#include<stdio.h>
#include<stdlib.h>

struct binarytree
{
    int data;
    struct binarytree *left, *right;
};

struct binarytree *insert(int num)
{
    struct binarytree *node=malloc(sizeof(struct binarytree));
    node->data  =   num;
    node->right =   NULL;
    node->left  =   NULL;
    return node;
}

int check(struct binarytree *node)
{
    if (node == NULL)
        return 0;
    if ((node->left == NULL)&&(node->right == NULL))
        return 1;
    return 0;
}

int sum(struct binarytree *root)
{
    int res=0;
    if (root != NULL)
    {
        if (check(root->left))
            res=res + root->left->data;
        else
            res=res + sum(root->left);
        
        res=res + sum(root->right);
    }
    return res;
}


int main()
{
    struct binarytree *root   = insert(54);
    root->left                = insert(27);
    root->right               = insert(13);
    root->right->left         = insert(20);
    root->right->right        = insert(10);
    root->right->right->left  = insert(25);
    root->left->right         = insert(12);
    root->left->right->right  = insert(30);
    root->left->left          = insert(10);
    printf("Sum of all left leaves in a binary tree = %d \n",sum(root));
    
    return 0;
}
