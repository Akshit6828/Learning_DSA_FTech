#include <stdio.h>
//#include <stdlib.h>

int main()
{
    int x[]={10,20,30,40,34};
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(x[i]<x[j])
            {
                int temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d\t",x[i]);
    }
    return 0;
}
