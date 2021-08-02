#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter value");
        scanf("%d",&x[i]);
        
        // Implementing heap if the value at ith index is greater than its i/2th index.
        while(i>0)
        {
            // Swapping if the condition meets
            if(x[i]>x[i/2])
            {
                int temp;
                temp=x[i];
                x[i]=x[i/2];
                x[i/2]=temp;
            }
            i=i/2;
        }

    }
    for(i=0;i<5;i++)
    {
        printf("%d",x[i]);
    }
    return 0;
}
