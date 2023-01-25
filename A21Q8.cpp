#include<stdio.h>
#include<string.h>
struct student
{
        int maths,physic,chemistry,roll;
        char name[30];
}b[5];
int main()
{
        int i,sum;
        float per;
        for(i=0;i<10;i++)
        {
                printf("Entre the name of student\n");
                fflush(stdin);
                fgets(b[i].name,30,stdin);
                printf("Entre the roll no.\n");
                scanf("%d",&b[i].roll);
                printf("Entre the each subject marks\n");
                scanf("%d%d%d",&b[i].maths,&b[i].physic,&b[i].chemistry);
        }
        for(i=0;i<10;i++)
        {        sum=0;
                printf("%s\nroll no. %d\n",b[i].name,b[i].roll);
                printf("maths=%d\nphysics=%d\nchemistry=%d\n",b[i].maths,b[i].physic,b[i].chemistry);
                sum=b[i].maths+b[i].physic+b[i].chemistry;
                per=(sum/300.0)*100;
                printf("Total percentage=%f",per);
                
        }
}
