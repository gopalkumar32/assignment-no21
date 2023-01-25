#include<stdio.h>
#include<string.h>
struct Employee
{
        char name[30];
        int salary,id;
}b;
void name()
{printf("Entre the name\n");
        fgets(b.name,30,stdin);
}
void salary()
{
        printf("Entre the salary\n");
        scanf("%d",&b.salary);
}
void id()
{
        printf("Entry the id\n");
        scanf("%d",&b.id);
}
void display()
{
 printf("Employee name =%s",b.name);
 printf("salary=%d\n",b.salary);
 printf("Id of employee=%d\n",b.id);
}
int main()
{
        name();
        salary();
        id();
        display();
}

