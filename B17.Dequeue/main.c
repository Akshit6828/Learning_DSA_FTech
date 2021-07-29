#include <stdio.h>
#include <stdlib.h>
int front=-1;
int rare=-1;

int main()
{
    int n,i;
    char x[10];
    printf("Enter size of queue");
    scanf("%d",&n);
    printf("Enter queue");
   for(i=0;i<n;i++)
  {
    scanf("%d",x[i]);
  }
  int count=1;
  while(count==1)
  {
      printf("Enter 1 to push from Start\n 2 to Pop from Start\n 3 to push from Start\n 4 to pop from back\n");
  }
    return 0;
}
