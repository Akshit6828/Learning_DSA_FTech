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
    int count=1;
    start=(struct link *)malloc(sizeof(struct link));
    first=start;
    while(count==1)
    {
      printf("Enter item");
      scanf("%d",&start->item);
      printf("Enter 1 for Continue");
      scanf("%d",&count);
      if(count==1)
      {
          start->next=(struct link *)malloc(sizeof(struct link));
          start=start->next;
      }
      else
      {
          break;
      }
    }
    start->next=NULL;
    start=first;
    while(start!=NULL)
    {
        printf("\n%d\n",start->item);
        start=start->next;
    }
    return 0;
}
