#include <stdio.h>
#include <stdlib.h>
#include<malloc.h>
struct link
{
    int item;
    struct link *next;
};
int main()
{
    struct link *first,*start;
    start=(struct link *)malloc(sizeof(struct link));
    first=start;
    start->item=10;
    start->next=(struct link *)malloc(sizeof(struct link));
    start=start->next;
    start->item=20;
    start->next=(struct link *)malloc(sizeof(struct link));
    start=start->next;
    start->item=30;
    start->next=NULL;
    start=first;
    while(start!=NULL)
    {
        printf("%d\n",start->item);
        start=start->next;
    }

    return 0;
}
