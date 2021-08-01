#include <stdio.h>
#include <stdlib.h>

struct tree
{
    int item;
    struct tree *left;
    struct tree *right;

};
void preorder(struct tree  **start);
void postorder(struct tree **start);
void inorder(struct tree **start);

int main()
{
    struct tree *start,*first;
    start=(struct tree *)malloc(sizeof(struct tree));
    first=start;
    start->item=10;
    start->left=(struct tree *)malloc(sizeof(struct tree));
    start=start->left;
    start->item=20;
    start->left=NULL;
    start->right=NULL;
    start=first;
    start->right=(struct tree *)malloc(sizeof(struct tree));
    start=start->right;
    start->item=30;
    start->left=NULL;
    start->right=NULL;
    start=first;
    printf("Preordered path is\n");
    preorder(&start);
    printf("\nPostordered path is \n");
    postorder(&start);
    printf("\nInordered path is\n");
    inorder(&start);
    return 0;
    }
    void preorder(struct tree **start)
    {
        if((*start)!=NULL)
        {
            printf("%d\t",(*start)->item);
            preorder(&((*start)->left));
            preorder(&((*start)->right));
        }
    }
    void postorder(struct tree **start)
    {
        if((*start)!=NULL)
        {
            postorder(&((*start)->left));
            postorder(&((*start)->right));
            printf("%d\t",(*start)->item);
        }
    }
    void inorder(struct tree **start)
    {
        if((*start)!=NULL)
        {
            inorder(&((*start)->left));
            printf("%d\t",(*start)->item);
            inorder(&((*start)->right));
        }
    }

