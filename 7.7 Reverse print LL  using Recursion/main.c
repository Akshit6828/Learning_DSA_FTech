#include <stdio.h>
#include <stdlib.h>
#include<malloc.h>
struct link
{
    int item;
    struct item *next;
};
void display(struct link **start);
int main()
{
    struct link *start,*first;
    start=(struct link*)malloc(sizeof(struct link));
    first=start;
    start->item=10;
    start->next=(struct link*)malloc(sizeof(struct link));
    start=start->next;
    start->item=20;
    start->next=(struct link*)malloc(sizeof(struct link));
    start=start->next;
    start->item=30;
    start->next=(struct link*)malloc(sizeof(struct link));
    start->next=NULL;
    start=first;
    display(&start);
    return 0;

}
void display(struct link **start)
{
    if((*start)!=NULL)
    {
        display(&((*start)->next));
        printf("%d\n",(*start)->item);
    }
}
