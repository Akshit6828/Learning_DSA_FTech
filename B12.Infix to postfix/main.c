#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char exp[40];
    char stack1[40];
    char stack2[40];
    int i=0;
    int top1=-1,top2=-1;
    printf("Enter the infix expression");
    scanf("%s",exp);


    while(exp[i]!='\0')
    {
        if(exp[i]=='+'||exp[i]=='-')
        {
            if(stack2[top2]=='*'||stack2[top2]=='/'||stack2[top2]=='%')
             {
                while(top2>=0)
                {
                stack1[++top1]=stack2[top2--];
                }
                stack2[++top2]=exp[i];
            }
           else if(stack2[top2]=='+'||stack2[top2]=='-')
             {
                while(top2>=0)
                {
                    stack1[++top1]==stack2[top2--];
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
                if(stack2[top2]=='+'||stack2[top2]=='-')
                {
                stack2[++top2]=exp[i];
                }
                else if(stack2[top2]=='*'||stack2[top2]=='/'||stack2[top2]=='%')
                {
                    while(top2>=0)
                    {

                    stack1[++top1]=stack2[top2--];
                    if(stack2[top2]!='*'||stack2[top2]!='/'||stack2[top2]!='%')break;
                    }
                    stack2[++top2]=exp[i];
                }
                else
                {
                    stack2[++top2]=exp[i];
                }

        }
        else{
            stack1[++top1]=exp[i];
        }
      i++;
    }
    while(top2>=0)
    {
        stack1[++top1]=stack2[top2--];

    }
    printf("Postfix expression is\n");
    stack1[++top1]='\0';
   //strrev(stack1);
    printf("%s",stack1);
    return 0;
}
