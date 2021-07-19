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
    start=first;
    while(start!=NULL)
    {
        printf("%d\t",start->item);
        start=start->next;
    }
    start=last;
    printf("\n");
    while(start!=NULL)
    {
        printf("%d\t",start->item);
        start=start->back;
    }
    return 0;
}
