#include<stdio.h>
#include<string.h>
struct Employee
{
        char name[30];
        int salary,id;
}b;
void name()
{
        printf("Entre the name\n");
        fgets(b.name,30,stdin);
        printf("Employee name =%s",b.name);
}
void salary()
{
        printf("Entre the salary\n");
        scanf("%d",&b.salary);
        printf("salary=%d",b.salary);
}
void id()
{
        printf("Entre the id\n");
        scanf("%d",&b.id);
        printf("Id of employee=%d\n",b.id);
}
int main()
{
        name();
        salary();
        id();
}

