/*
3．编写一个程序，把您的年龄转换成天数并显示二者的值。
不用考虑平年( fractional year)和闰年(leapyear)的问题。
*/
#include <stdio.h>
int main(void)
{
    int year;
    printf("please input:");
    scanf("%d",&year);
    printf("you left %d day\n",year*365);
    return 0;
}
