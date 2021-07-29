#include <stdio.h>
#include <stdlib.h>
int front;
int x[5];
int front=-1;
void pop(int n);
int main()
{
    int n,i;

    printf("Enter size of queue");
    scanf("%d",&n);
    printf("Enter queue");
    front=front+1;
    for(i=0;i<n;i++)
    {
    scanf("%d",&x[i]);
    }
    int z,count=1;
    while(count==1)
    {

        printf("Press 1 to pop");
        scanf("%d",&z);
        if(z==1)
        {

        pop(n);
        }
        else
        {
        printf("You have entered a wrong input");
        }
        printf("Enter 1 to continue");
        scanf("%d",&count);
    }
          return 0;
}
void pop(int n)
{
    int large,i;
    large=x[0];
    int pos=0;
    for(i=front;i<n;i++)
    {
        if(large<x[i])
        {
        large=x[i];
        pos=i;
        }
    }
    int t=x[0];
    x[0]=x[pos];
    x[pos]=t;
    front=front+1;
    printf("Queue is\n");
    for(i=front;i<n;i++)
    {
       printf("%d\t",x[i]);
    }

}
