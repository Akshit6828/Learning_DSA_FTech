#include <stdio.h>
#include <stdlib.h>
#include<malloc.h>
struct search
{
    int item;
    struct search *next;
};

int main()
{
    struct search *start, *first;
    start=(struct search *)malloc(sizeof(struct search));
    first=start;
    start->item=10;
    start->next=(struct search *)malloc(sizeof(struct search));
    start=start->next;
    start->item=20;
    start->next=(struct search *)malloc(sizeof(struct search));
    start=start->next;
    start->item=30;
    start->next=NULL;
    int x;
    int flag;
    start=first;
    printf("Enter number to be searched");
    scanf("%d",&x);
    while(start!=NULL)
    {
        if(start->item==x)
        {
            flag=1;
        }
        start=start->next;

    }
    if(flag==1)
    {
        printf("present");

    }
    else
    {
        printf("NOt present");
    }


    return 0;
}
