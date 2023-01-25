#include<stdio.h>
struct time
{
        int sec;
        int min;
        int hrs;
};
void diff_between_time(struct time t1,struct time t2,struct time *diff);
int main()
{
        struct time start_time,stop_time,diff;
        printf("Entre start time\n");
        printf("Entre hourse,minutes and seconds:");
        scanf("%d %d %d",&start_time.hrs,&start_time.min,&start_time.sec);
        diff_between_time(start_time,stop_time,&diff);
        printf("\n time diff: %d: %d: %d-",start_time.hrs,start_time.min,start_time.sec);
        printf("%d:%d %d ",stop_time.hrs,stop_time.min,stop_time.sec);
        printf("=%d:%d:%d\n",diff.hrs,diff.min,diff.sec);
}
void diff_between_time(struct time start,struct time stop,struct time *diff)
{
   while(stop.sec>start.sec)
   {
           --start.min;
           start.sec+=60;
   }
   diff->sec=start.sec-stop.sec;
   while(stop.min>start.min)
   {
           --start.hrs;
           start.min+=60;
   }
   diff->min=start.min-stop.min;
   diff->hrs=start.hrs-stop.hrs;
}

