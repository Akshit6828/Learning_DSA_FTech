#include <stdio.h>
#include <stdlib.h>
struct student
{
char name[20];
int age;
char address[30];
struct student *next;
};
int main()
{
    int count=1;
    struct student *start,*first;
    start=(struct student*)malloc(sizeof(struct student));
    first=start;
    int i=1;
    while(count==1)
    {
        printf("Enter name,age and address of student %d",i);
        scanf("%s %d %s",&start->name,&start->age,&start->address);
        i+=1;
        printf("Enter 1 for continue\n");
        scanf("%d",&count);
        if(count!=1)
        {
            break;
        }
        else
        {
            start->next=(struct student*)malloc(sizeof(struct student));
            start=start->next;
        }
    }
    start->next=NULL;
    start=first;
    while(start!=NULL)
    {
        printf("name = %s, age= %d, address = %s\n",start->name,start->age,start->address);
        start=start->next;
    }
    return 0;
}
