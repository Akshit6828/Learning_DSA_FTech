#include <stdio.h>
#include <stdlib.h>

// Function  and variable Declarations
void push(int,int);
int pop(int,int);
void display(int,int);
int queue[5];
int max=5;

int main()
{
    int count=1;
    int item;
    int n,opt,rear=-1,front=0;
    while(count==1)
    {
        printf("Enter 1 for push and 2 for pop");
        scanf("%d",&opt);
        if(opt==1)
        {
            printf("Enter item");
            scanf("%d",&n);
            push(n,++rear);
        }
        else if(opt==2)
        {
            front=pop(front,rear);
        }
        printf("\nEnter 1 to Continue");
        scanf("%d",&count);
    }
    display(front,rear);
    return 0;
}
void push(int item,int rear)
{
    if(rear<max)
    {
        queue[rear]=item;
    }
    else
    {
        printf("Overflow");
    }
}
int pop(int front,int rear)
{
    if(front>=0&&front<=rear)
    {
        front++;
    }
    else
    {
        printf("Underflow");
    }
    return(front);
}
void display(int front,int rear)
{
    printf("Queue is\n");
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("%d\t",queue[i]);
    }
}
