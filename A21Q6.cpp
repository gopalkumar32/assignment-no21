#include<stdio.h>
#include<string.h>
struct Emp 
{
        int emp_no;
        char name[15],car[30];
        int salary;
};
int main()
{
        struct Emp a[50],temp;
        int i,j,n;
        printf("\n Entre the n value\n");
        scanf("%d",&n);
        printf("\n Entre the %d employees emp_no,name,salary\n",n);

for(i=0;i<n;i++)
scanf("%d%s%d",&a[i].emp_no,a[i].name,&a[i].salary);
for(i=0;i<n;i++)
{
        for(j=i+1;j<n;j++)
        {
                if(strcmp(a[i].name,a[j].name)>0)
                {
                strcpy(car,a[i].name);
                strcpy(a[i].name,a[j].name);
                strcpy(a[j],car);
                }
        }
        for(i=0;i<n;i++)
        printf("\n%s"a[i].name);
}
}
