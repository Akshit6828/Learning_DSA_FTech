#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char exp[40];
    char stack1[20];
    char stack2[20];
    int i=0;
    int top1=-1;
    int top2=-1;
    printf("Enter expression");
    scanf("%s",&exp);
    strrev(exp);
    while(exp[i]!='\0')
    {
        if(exp[i]=='+'||exp[i]=='-')
         {
             if(exp[i+2]=='*'||exp[i+2]=='/'||exp[i+2]=='%')
             {

                 if(stack2[top2]=='*'||stack2[top2]=='/'||stack2[top2]=='%')
                 {
                 stack2[++top2]=exp[i+2];
                 }
                 else if(stack2[top2]=='+'||stack2[top2]=='-')
                 {
                 stack2[++top2]=exp[i+2];
                 }
                 else
                 {
                 stack2[++top2]=exp[i+2];
                 }
             }
             else if(exp[i+2]=='+'||exp[i+2]=='-')
             {

                 if(stack2[top2]=='*'||stack2[top2]=='/'||stack2[top2]=='%')
                 {
                     while(top2>=0)
                     {
                         stack1[++top1]=stack2[top2--];
                     }
                     stack2[++top2]=exp[i+2];

                 }
                 else if(stack2[top2]=='+'||stack2[top2]=='-')
                 {
                      stack2[++top2]=exp[i+2];

                 }
                 else
                 {
                 stack2[++top2]=exp[i+2];

                 }
            }
            else if(exp[i+2]=='\0')
            {
               while(top2>=0)
               {
                   stack1[++top1]=stack2[top2--];
               }
               stack2[++top2]=exp[i];

            }
            else
            {
                stack2[++top2]=exp[i];
            }
         }
         else if(exp[i]=='*'||exp[i]=='/'||exp[i]=='%')
           {
            if(exp[i+2]=='*'||exp[i+2]=='/'||exp[i+2]=='%')
            {

                if(stack2[top2]=='*'||stack2[top2]=='/'||stack2[top2]=='%')
                {
                stack2[++top2]=exp[i+2];
                //stack2[++top2]=exp[i];
                }
                else if(stack2[top2]=='+'||stack2[top2]=='-')
                {
                stack2[++top2]=exp[i+2];
                //stack2[++top2]=exp[i];
                }
                else
                {
                stack2[++top2]=exp[i+2];
                //stack2[++top2]=exp[i];
                }

            }
            else if(exp[i+2]=='+'||exp[i+2]=='-')
            {
                if(stack2[top2]=='*'||stack2[top2]=='/'||stack2[top2]=='%')
                {
                    stack2[++top2]=exp[i];
                    while(top2>=0)
                    {
                    stack1[++top1]=stack2[top2--];
                    }
                }
                else if(stack2[top2]=='+'||stack2[top2]=='-')
                {
                    stack2[++top2]=exp[i];
                    //stack2[++top2]=exp[i+2];
                }
                else
                {
                    stack2[++top2]=exp[i];
                    //stack2[++top2]=exp[i+2];
                }
            }
            else
            {
                stack2[++top2]=exp[i];
            }
        }
        else
        {
            stack1[++top1]=exp[i];
        }
          i++;
    }
    while(top2>=0)
    {
        stack1[++top1]=stack2[top2--];
    }
    strrev(stack1);
    printf("Prefix is\n");
    printf("%s",stack1);
    return 0;
}
