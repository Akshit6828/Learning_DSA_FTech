#include <iostream>
using namespace std;
int main()
{
    int x[10],k,n,i;
  cout<<"enter elements in array";
  for(i=1;i<=5;i++)
  {
      cin>>x[i];
  }
  cout<<"Enter the position you want to enter the array\n";
  cin>>k;
  cout<<"Enter the element you want to enter\n";
  cin>>n;
  for(i=5;i>=k;i--)
  {
      x[i+1]=x[i];
      if(i==k)
      {
          x[i]=n;
      }
  }
  cout<<"The new array is";
for(i=1;i<=6;i++)
  {
    cout<<"\t"<<x[i];
  }
return 0;
}
