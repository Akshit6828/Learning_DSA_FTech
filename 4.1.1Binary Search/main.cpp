#include <conio.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
  int x[10],n,i,j,flag=0;
  cout<<"Enter array of 5 elments\n";
  for(i=0;i<5;i++)
  {
      cin>>x[i];
  }
  int first=0;
  int last=5;
  int mid=(first+last)/2;
  cout<<"Enter the element to be searched\n";
  cin>>n;
  while(first<=last)
  {
    if(x[mid]==n)
    {
        flag=1;
        break;
    }
    else
    {
        if(n>x[mid])
        {
            first=mid+1;
        }
        else
        {
            last=mid-1;
        }
    }
    mid=(first+last)/2;
  }
  if(flag==1)
  {
      printf("Present");
  }
  else
  {
      printf("Not present");
  }
return 0;
}

