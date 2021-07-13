#include <iostream>
using namespace std;
int main()
{
   char x[5];
   int i;
  cout<<"Enter Array\n";
   for(i=0;i<5;i++)
   {
   cin>>x[i];
   }
   cout<<"Addresses are\n";
   for(i=0;i<5;i++)
   {
       cout<<(char*)&x[i]<<endl;
   }
      return 0;
}
