#include<stdio.h>
#include<string.h>
struct employee 
{
        int id,salary;
        char name[20];
};
int main()
{
        struct employee e;
        printf("Entre the the name\n");
        gets(e.name);
        printf("Entre the id\n");
        scanf("%d",&e.id);
        printf("Entre the salary\n");
        scanf("%d",&e.salary);
        printf("Employee name %s\n, employee id=%d\n,employee salary=%d",e.name,e.id,e.salary);
        
}
