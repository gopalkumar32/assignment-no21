#include<stdio.h>
struct Emp 
{
        int emp_no;
        char name[15];
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
                if(a[i].salary>a[j].salary)
                {
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=a[i];
                }
        }
        for(i=0;i<n;i++)
        printf("\n%-5d%-15s%-10d",a[i].emp_no,a[i].name,a[i].salary);
}
}
