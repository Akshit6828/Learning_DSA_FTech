#include <stdio.h>
#include <stdlib.h>

int main()
{
   char x[40]="(2+3)";
   char y[40];
   int top=-1;
   int i=0;
   while(x[i]!='\0')
   {
       if(x[i]=='('||x[i]=='{'||x[i]=='[')
            {
                y[++top]==x[i];
            }
            else if(x[i]==')'||x[i]=='}'||x[i]==']')
            {
                top--;
            }
            i++;
   }
   if(top==-1)
   {
       printf("valid");

   }
   else
   {
       printf("Not valid");
   }
    return 0;
}
