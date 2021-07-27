#include <stdio.h>
#include <stdlib.h>
towerhanoi(int n,char beg,char end,char aux);
 char beg='A',aux='B',end='C';
int main()
{
    int n;0
    printf("Enter no of disks");
    scanf("%d",&n);
    towerhanoi(n,beg,end,aux);
    return 0;
}
towerhanoi(int n,char beg,char aux ,char end)
{
    if(n==1)
    {        printf("\n%c->%c",beg,end);
             return;
    }
    else
        {
        towerhanoi(n-1,beg,end,aux);
        printf("\n%c->%c",beg,end);
        towerhanoi(n-1,aux,end,beg);


         printf("\n%c->%c",end,aux);

        }
}
