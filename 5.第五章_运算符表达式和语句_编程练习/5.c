/*
5.改写用来找到前20个整数之和的程序addemup.c（程序清单5.13）（
如果您愿意，可以把addemup.c程序看成是一个计算如果您第一天得到$l，
第二天得到$2，第三天得到$3，以此类推，您在20天里会挣多少钱的程序）。
修改该程序，目的是您能交q地告诉程序计算将进行到哪里。
也就是说，用一个读入的变量来代替20。
*/
#include <stdio.h>
int main(void)
{
int count, sum, day;
sum = 1;
count = 1;
scanf("%d", &day);
while (count++ < day)
 sum = sum + count;
printf("sum = %d\n", sum);
return 0;
}
