/*
3．编写一个程序，该程序要求用户输入天数，然后将该值转换为周数和天数。
例如，此程序将把18天转换成2周4天。用下面的格式显示结果： 
18 days are 2 weeks, 4 days.
使用一个while循环让用户重复输入天数；当用户输入一个非正数（如0或-20）时，程序将终止循环。
*/
#include <stdio.h>
int main(void)
{
    const int WEEK = 7;
    int day;
    printf("please input days:");
    scanf("%d",&day);
    while(day > 0)
    {
        printf("%d days are %d weeks, %d days.\n",day ,day/WEEK ,day%WEEK);
        printf("please input days:");
        scanf("%d",&day);
    }
    return 0;
}
