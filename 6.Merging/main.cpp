#include <iostream>

using namespace std;

int main()
{
    int arr3[10],arr2[5],arr1[5];
    int i;
    cout<<"Enter array 1 and 2";
    for(i=0;i<5;i++)
    {
        cin>>arr1[i]>>arr2[i];;
    }
    cout<<"Merged array is";
    for(i=0;i<10;i++)
    {
        if(i%2==0||i%2==2)
        {
            arr3[i]=arr1[i];
        }
         else
         {
            arr3[i]=arr2[i];
         }
            cout<<arr3[i]<<"\t";
    }


    return 0;
}
