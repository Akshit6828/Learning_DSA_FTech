#include <stdio.h>
#include <stdlib.h>
struct dlink
{
    int item;
    struct dlink *next,*back;
};

int main()
{

    struct dlink *start,*first,*last,*temp,*temp1;
    start=(struct dlink *)malloc(sizeof(struct dlink));
    first=start;
    start->item=10;
    start->back=NULL;
    temp=start;

    int count=1;
    while(count==1)
    {
        temp1=start;
        start->next=(struct dlink *)malloc(sizeof(struct dlink));
        start=start->next;
        printf("Enter item");
        scanf("%d",&start->item);
        start->back=temp;
        temp=start;
        printf("Enter 1 for continue");
        scanf("%d",&count);
        if(count!=1)
        {
            break;

        }


    }
            start->next=NULL;
            start->back=temp1;
            last=start;

    start=first;
    while(start!=NULL)
    {
        printf("%d\t",start->item);
        start=start->next;
    }
    printf("\n");
    start=last;
    while(start!=NULL)
    {
        printf("%d\t",start->item);
        start=start->back;
    }
    return 0;
}
