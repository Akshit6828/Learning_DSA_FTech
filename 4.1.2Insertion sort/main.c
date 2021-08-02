#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[5];
    int i,j,temp;
    for(i=0;i<5;i++)
    {
        printf("Enter value");
        scanf("%d",&x[i]);
        for(j=i;j>0;j--)
        {
            if(x[j]>x[j-1])
            {
                temp=x[j];
                x[j]=x[j-1];
                x[j-1]=temp;
            }
        }
    }
    printf("Sorted array is\n");
        for(i=0;i<5;i++)
        {
            printf("%d\t",x[i]);
        }
    return 0;
}
