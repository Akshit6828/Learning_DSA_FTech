#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int age;
    char address[40];
    struct student *next;
};
int main()
{
   struct student*first,*start;
   start=(struct student*)malloc(sizeof(struct student));
   first=start;
   printf("Enter name, age and address");
   scanf("%s%d%s",&start->name,&start->age,&start->address);
   start->next=(struct student*)malloc(sizeof(struct student));
   start=start->next;
   printf("Enter name, age and address");
   scanf("%s%d%s",&start->name,&start->age,&start->address);
   start->next=(struct student*)malloc(sizeof(struct student));
   start=start->next;
     printf("Enter name, age and address");
   scanf("%s%d%s",&start->name,&start->age,&start->address);
   start->next=NULL;
   start=first;
   while(start!=NULL)
   {
       printf("%s %d %s\n",start->name,start->age,start->address);
       start=start->next;
   }


    return 0;
}
