#include <stdio.h>
#include <stdlib.h>
struct tree
{
    int item;
    struct tree *left;
    struct tree *right;


};
void create(struct tree **start,int item);
void preorder(struct tree **start);

int main()
{
    struct tree *start;
    int item;
    int count=1;
    start=NULL;
    while(count==1)
    {
        printf("Enter item");
        scanf("%d",&item);
        create(&start,item);
        printf("Enter 1 to continue");
        scanf("%d",&count);
    }
    preorder(&start);
    return 0;
}
void create(struct tree **start,int item)
{
    if((*start)==NULL)
    {
        (*start)=(struct tree *)malloc(sizeof(struct tree));
        (*start)->item=item;
        (*start)->left=NULL;
        (*start)->right=NULL;
    }
    else
    {
        int o;
        printf("1 for left and 2 for right");
        scanf("%d",&o);
        if(o==1)
        create(&(*start)->left,item);
        else if(o==2)
        create(&(*start)->right,item);
    }
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
