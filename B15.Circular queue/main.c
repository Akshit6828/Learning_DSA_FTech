#include <stdio.h>
#include <stdlib.h>

// Function and Variable Declarations
int max=5;
void push();
void pop();
void display();
int front=-1;
int rear=-1;
int cque[5];
int main()
{
    int n,count=1;
    while(count==1)
    {
    printf("Enter 1 for Push And 2 for Pop");
    scanf("%d",&n);

    switch(n)
    {
    case 1:
    push();
    break;
    case 2:
    pop();
    break;
    }
    printf("Enter 1 to continue");
    scanf("%d",&count);
    }
    printf("Queue is\n");
    display();
return 0;
}

// Function to work for push operation
void push()
{
    int x;
    if(((front==0)&&(rear==max-1))||(front==rear+1))
    {
        printf("{OVERFLOW}\n");
        return;
    }
    printf("Enter value\n");
    scanf("%d",&x);
    if(rear==-1)
    {
        rear=0;
        cque[rear]=x;
        front=0;
    }
   else if((front>0)&&(rear==max-1))
   {
       rear=0;
       cque[rear]=x;
   }

   else
   {
       rear=rear+1;
       cque[rear]=x;
    }
}

// Function to work for pop operation
void pop()
{
    int a;
    if(front==-1&&rear==-1)
    {
        printf("Underflow\n");
        return;
    }
    else
    {   a=cque[front];
        if(front==rear)
        {
        front=-1;
        rear=-1;
        }
        else if(front==max-1)
        {
        front=0;
        }
        else
        {
        front++;
        printf("{Front incremented}\n");
        }
        printf("Deleted element is %d\n",a);
    }

}
void display()
{
    int i,j,a;
    if(front==-1&&rear==-1)
    {
        printf("Queue is underflow");
    }
    if(front>rear)
    {
    for(i=front;i<max;i++)

        printf("%d\t",cque[i]);

    for(j=0;j<=rear;j++)

       printf("%d\t",cque[j]);

    printf("deleted element is %d\n",a);
    }
else
    {
        for(i=front;i<=rear;i++)
        printf("%d\t",cque[i]);
    }
    printf("\n");
}

