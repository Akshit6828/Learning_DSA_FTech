#include<iostream>
using namespace std;
void printPatt(int n)
{
    int i,j;
   for(i=n;i>0;i--)
   {
       for(j=i;j>0;j--)
       {
           cout<<"*";
       }
       cout<<endl;
   }
}
int main()
{
    int n;
    cout<<"Enter n";
    cin>>n;
    printPatt(n);
    return 0;
}
