#include <iostream>

using namespace std;

int main()
{
    int x[10],i;
    cout<<"Enter array";
    for(i=1;i<=5;i++)
    {
      cin>>x[i];
    }
    cout<<"The array you have entered is\n";
    for(i=1;i<=5;i++)
    {
        cout<<x[i]<<"\t";

    }
        return 0;

}
