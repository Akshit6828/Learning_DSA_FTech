#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[6];
    int i,j;
    printf("Enter elements in array");
    for(i=0;i<6;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<6;i++)
    {
        for(j=6;j>=i;j--)
        {
            if(x[j]>x[j+1])
            {
                int b=x[j];
                x[j]=x[j+1];
                x[j+1]=b;
            }
        }
    }
    printf("Sorted array in ascending order is\n");
    for(i=0;i<6;i++)
    {
        printf("%d\t",x[i]);
    }
    return 0;
}
