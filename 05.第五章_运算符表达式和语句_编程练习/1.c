/*
1．编写一个程序。将用分钟表示的时间转换成以小时和分钟表示的时间。
使用#define或者const来创建一个代表60的符号常量。
使用while循环来允许用户重复键入值，并且当键入一个小于等于0的时间时终止循环。
*/
#include <stdio.h>
int main(void)
{
    const int HOUR = 60;
    int time;
    printf("please input time(min):",&time);
    while(scanf("%d",&time) == 1 ,0 < time)
    {
        printf("%d 小时 %d 分钟\n",time/HOUR,time%HOUR);
        printf("please input time(min):");
    }
    return 0;
}
