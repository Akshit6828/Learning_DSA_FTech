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
    struct dlink *insert;
    insert=(struct dlink*)malloc(sizeof(struct dlink));
    insert->item=100;
    printf("Enter the position");
    scanf("%d",&pos);
    if(pos==0)
    {
        start=first;
        //first=insert;
        insert->next=start;
        start->back=insert;
        insert->back=NULL;
        first=insert;
    }
    else if(pos==3)
    {
        start=last;
        insert->back=start;
        insert->next=NULL;
        start->next=insert;
        last=insert;
    }
    else
     {
    start=first;
    int i;
    for(i=1;i<pos;i++)
    {
        start=start->next;
    }
    insert->next=start->next;
    start->next=insert;
    insert->next->back=insert;
    insert->back=start;
     }
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
