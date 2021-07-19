#include <stdio.h>
#include <stdlib.h>
struct dlink
{
    int item;
    struct dlink *next,*back;

};
void create(struct dlink **,int);
void display(struct dlink**start);
struct dlink *last;

int main()
{
    struct dlink *start,*first;
    int item;
    int count=1;
    first=start;
    start=NULL;
    while(count==1)
    {
        printf("Enter item");
        scanf("%d",&item);
        create(&start,item);
        printf("Enter 1 for continue");
        scanf("%d",&count);
       /* if(count!=1)
        {
            break;
        }*/
    }
        start=first;
        printf("fddd");
    start->back=NULL;
    display(&start);
    return 0;
}
void create(struct dlink**start,int item)
{
    if((*start)==NULL)
    {
        (*start)=(struct dlink *)malloc(sizeof(struct dlink));
        (*start)->item=item;
        (*start)->next=NULL;
        last=start;
    }
     else
    {
        create(&((*start)->next),item);
    }
}
void display(struct dlink **start)
{
    if((*start)!=NULL)
    {
        printf("%d\n",(*start)->item);
        (*start)=(*start)->next;
     }
}
