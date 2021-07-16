#include <stdio.h>
#include <stdlib.h>
#include<malloc.h>
struct link
{
    int x;
      struct link *next;
};

int main()
{
    struct link *start,*first;
    (start)=(struct link*)malloc(sizeof(struct link));//Allocating dynamic memory
    start->x=10;
    first=start;
    (start)->next=(struct link*)malloc(sizeof(struct link));
    start=start->next;
    start->x=20;
    (start)->next=(struct link*)malloc(sizeof(struct link));
    start=start->next;
    start->x=30;
    start->next=NULL;
    start=first;
    while(start!=NULL)
    {

        printf("%d\n",start->x);
        start=start->next;
    }
    return 0;
}
