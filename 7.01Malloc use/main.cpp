#include <iostream>
#include<malloc.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
struct link
{
    int item;
    struct link *next;
};

int main()
{
    struct link *start, *first;
    start=(struct link *)malloc(sizeof(struct link));
    first=start;
    start->item=10;
    start->next=(struct link *)malloc(sizeof(struct link));
    start=start->next;
    start->item=20;
    start->next=(struct link *)malloc(sizeof(struct link));
    start->next=NULL;
    start=first;
    while(start!=NULL)
    {
    cout<<start->item<<endl;
    start=start->next;
    }
    return 0;
}
