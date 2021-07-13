#include <iostream>

using namespace std;
class c1
{
protected:
    int x[10];
public:
    void input()
    {    cout<<"Enter array";
    int i;
        for(i=0;i<6;i++)
        {
            cin>>x[i];
        }
    }
};
class c2:public c1
{  public:
    int i,j;
    void arrange()
    {
        cout<<"Sorted array is\n";
       for(i=5;i>=1;i--)
       {
           for(j=1;j<=i;j++)
           {
               if(x[j-1]<x[j])
               {
                   int temp=x[j-1];
                   x[j-1]=x[j];
                   x[j]=temp;
               }

           }
       }
       for(i=0;i<6;i++)
       {


            cout<<x[i]<<"\t";
       }


    }

};

int main()
{
    c2 p;
p.input();
p.arrange();
return 0;
}

