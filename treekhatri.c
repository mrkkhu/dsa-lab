#include<stdio.h>
#include<stdlib.h>

typedef struct BinarySearchTree
{
    struct BinarySearchTree *left;
    int data;
    struct BinarySearchTree *right;
} BST;

void create(BST **rt, int v);

int main()
{
    BST *Root = NULL;
    int ch, v;

    printf("Enter choice (1 to insert):\n");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1:
            printf("Enter data:\n");
            scanf("%d", &v);
            create(&Root, v);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}

void create(BST **rt, int v)
{
    BST *p = NULL;

    if (*rt == NULL)
    {
        p = (BST*)malloc(sizeof(BST));
        p->data = v;
        p->left = NULL;
        p->right = NULL;
        *rt = p;
        return;
    }
    else if ((*rt)->data > v)
    {
        create(&((*rt)->left), v);
    }
    else if ((*rt)->data < v)
    {
        create(&((*rt)->right), v);
    }
    else
    {
        printf("Duplicates not allowed\n");
        return;
    }
}
