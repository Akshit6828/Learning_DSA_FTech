#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{   char str1[100];
    char str2[50][50];
    char str3[50][50];
    int j=0,k=0,p=0,i;

    printf("Enter string");
    gets(str1);

   for(i=0;str1[i]!='\0';i++)
   {

       if(str1[i]==' ')
        {
            str2[j][k]='\0';
            j++;
            k=0;
        }
    else
        { str2[j][k]=str1[i];
           k++;
        }
    }
   str2[j][k]='\0';


   for(i=0;i<=j;i++)
   {
     if(strcmp(str2[i],"the")!=0)
       {
        strcpy(str3[p],str2[i]);
        p++;
       }
    }

   for(i=0;i<p;i++)
   printf(" %s",str3[i]);

  return 0;
}
