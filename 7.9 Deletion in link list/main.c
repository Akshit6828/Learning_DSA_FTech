#include <stdio.h>
#include <stdlib.h>
struct link
{
    int item;
    struct link *next;
};

int main()
{
    struct link *start,*first;
    start=(struct link *)malloc(sizeof(struct link));
    start->item=10;
    first=start;
    start->next=(struct link *)malloc(sizeof(struct link));
    start=start->next;
    start->item=20;
    start->next=(struct link *)malloc(sizeof(struct link));
    start=start->next;
    start->item=30;
    start->next=NULL;
    int pos;
    struct link *temp;
    printf("Enter position");
    scanf("%d",&pos);
    if(pos==0)
    {
        start=first;
        temp=first;
        first=start->next;
    }
    else if(pos==3)
    {
        start=first;
        while(start->next->next!=NULL)
        {
            start=start->next;
        }
        temp=start->next;
        start->next=NULL;
    }
    else
    {
        start=first;
        int i;
        for(i=1;i<pos;i++)
        {
            start=start->next;
        }
        temp=start->next;
        start->next=start->next->next;
    }
    free(temp);
     start=first;
     printf("List is\n");
     while(start!=NULL)
     {
         printf("%d\n",start->item);
         start=start->next;
     }

    return 0;
}
