#include <stdio.h>
#include <stdlib.h>

struct link
{
    int item;
    int *next;
};
int main()
{
    struct link *first,*start;
    start=(struct link *)malloc(sizeof(struct link));
    start->item=10;
    first =start;
    start->next=(struct link *)malloc(sizeof(struct link));
    start=start->next;
    start->item=20;
    start->next=(struct link *)malloc(sizeof(struct link));
    start=start->next;
    start->item=30;
    start->next=NULL;
    struct link *insert;
    int pos;
    printf("Enter position");
    scanf("%d",&pos);
    insert=(struct link *)malloc(sizeof(struct link));
    insert->item=100;
    if(pos==0)
    {
        start=first;
        insert->next=start;
        first=insert;
    }
    else if(pos==3)
    {

        start=first;
        while(start->next!=NULL)
        {
            start=start->next;
        }

        start->next=insert;
        insert->next=NULL;
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
    }
    start=first;
while(start!=NULL)
{
    printf("%d\n",start->item);
    start=start->next;
}




    return 0;
}
