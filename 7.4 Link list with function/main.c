#include <stdio.h>
#include <stdlib.h>
struct link
{
int item;
struct link *next;
};
void create(struct link**,int);
int main()
{
    struct link *start,*first;
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
    printf("Items are\n");
    while(start!=NULL)
    {
        printf("%d\n",start->item);
        start=start->next;
    }
    return 0;
}
void create(struct link **start,int item)
{

    if((*start)==NULL)
    {
        printf("Value at pointer was null so If is Called \n");
        (*start)=(struct link*)malloc(sizeof(struct link));
          (*start)->item=item;
        (*start)->next=NULL;
    }
    else
    {
        printf("Else is Called\n");
        create(&((*start)->next),item);
    }
}
