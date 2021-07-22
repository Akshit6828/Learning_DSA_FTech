#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
 //COORD coord={0,0}; // this is global variable
                                    //center of axis is set to the top left cornor of the screen
/* void gotoxy(int x,int y)
 {
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }*/*
int top=-1;
void pushing(int ,int);
int poping(int);
int max=5;
void display(int);
int stack[5];
int main()
{
int count=1;
int item,opt;
while(count==1)
{
    printf("Enter 1 for push,2 for pop and 3 to check the stack");
    scanf("%d",&opt);
    if(opt==1)
    {
        printf("Enter item");
        scanf("%d",&item);
        pushing(item,++top);
    }
    else if(opt==2)
    {
        top=poping(top);
    }
    else
    {
        printf("The stack presently is\n");
     display(top);
     printf("\n");
    }
    printf("Enter 1 to proceed");
    scanf("%d",&count);
    if(count!=1)
    break;
}
printf("Stack is\n");
 display(top);
       return 0;
}
void pushing(int item,int top)
{
    if(top<max)
    {
        stack[top]=item;
    }
    else
    {
        printf("Overflow\n");
    }
}
int poping(int top)
{
    if(top>=0)
    {
        top=top-1;
    }
    else
    {
        printf("Underflow\n");
    }
    return(top);
}
void display(int top)
{
    int i;
    for(i=0;i<=top;i++)
    {
        printf("%d\t",stack[i]);
    }
}
