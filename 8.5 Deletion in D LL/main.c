#include <stdio.h>
#include <stdlib.h>
#include<malloc.h>
struct dlink
{
    int item;
    struct dlink *back;
    struct dlink *next;
};

int main()
{
    struct dlink *start,*first,*temp,*last;
    start=(struct dlink*)malloc(sizeof(struct dlink));
    first=start;
    start->item=10;
    start->back=NULL;
    temp=start;
    start->next=(struct dlink*)malloc(sizeof(struct dlink));
    start=start->next;
    start->back=temp;
    start->item=20;
    temp=start;
    start->next=(struct dlink*)malloc(sizeof(struct dlink));
    start=start->next;
    start->back=temp;
    start->item=30;
    start->next=NULL;
    last=start;
    int pos;
    printf("Enter position");
    scanf("%d",&pos);
    if(pos==0)
    {
        start=first;
        first=start->next;
        start->next->back=NULL;
    }
    else if(pos==3)
    {
        start=last;
        start->back->next=NULL;
        last=start->back;
    }
    else
    {
        int i;
        start=first;
        for(i=1;i<pos;i++)
        {
            start=start->next;

        }
        start->next=start->next->next;
        start->next->back=start;
    }
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
