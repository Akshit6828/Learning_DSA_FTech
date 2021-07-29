#include<stdio.h>

void swap(int *x,int *y)
{
    int temp=*x;
    *x =*y;
    *y=temp;
}

int partation(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i = (low-1);
    for(int j=low;j<=high-1;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return(i+1);
}
void quicksort(int arr[],int low,int high)
{
      if(low<high)
      {
      int pi=partation(arr,low,high);
      quicksort(arr,low,pi-1);
      quicksort(arr,pi+1,high);
      }
}
void print_array(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
}

int main()
{
    int arr[]={10,7,8,6,66,88};
    int n=6;
    quicksort(arr,0,n-1);
    print_array(arr,n);
    return 0;

}
