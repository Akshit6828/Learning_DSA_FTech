
 #include <stdio.h>
#include <stdlib.h>
struct tree
{
    int item;
    struct tree *left;
    struct tree *right;
};
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
        if(item >(*start)->item)
        {
            create(&((*start)->right),item);

        }
        else if(item<(*start)->item);
        {
           create(&((*start)->left),item);
        }
    }
}
void displaypreorder(struct tree **start)
{
    if((*start)!=NULL)
    {
        printf("%d\t",(*start)->item);
        displaypreorder(&((*start)->left));
        //displaypreorder(&((*start)->right));
    }

}

int main()
{
struct tree *start, *first;
start=NULL;

int count=1;
int item;
while (count==1)
{
    printf("Enter item");
    scanf("%d",&item);
    create(&start,item);
    printf("\nEnter 1 for continue");
    scanf("%d",&count);
}
//start=first;
printf("Displaying Preorder of BST:\n");
displaypreorder(&start);
 }

