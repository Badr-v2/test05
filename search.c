#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int number;
    struct node* left;
    struct node* right;
}node;
int search(node* tree,int number);
int main(void)
{
    node* tree = NULL;
    node* n = malloc(sizeof(node));
    if(n == NULL)
    {
        return 1;
    }
    n->number = 2;
    n->left = NULL;
    n->right = NULL;
    tree = n;
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free(tree);
        return 1;
    }
    n->number = 1;
    n->left = NULL;
    n->right = NULL;
    tree->left = n;
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free(tree->left);
        free(tree);
        return 1;
    }
    n->number = 3;
    n->left = NULL;
    n->right = NULL;
    tree->right = n;
    search(tree,3);
}
int search(node* tree,int number)
{
    if (tree == NULL)
    {
        printf ("Not found! \n");
        return 1;
    }
    else if(number > tree->number)
    {
        printf("Go right \n");
        return search(tree->right,number);
    }
    else if(number < tree->number)
        {
        printf("Go left \n");
        return search(tree->left,number);
    }
    else{
        printf("Found. \n");
    }
}
