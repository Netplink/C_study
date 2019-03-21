/*
5．一年约有3.156×10e7s。编写一个程序，要求输入您的年龄，然后显示该年龄合多少秒。
*/
#include <stdio.h>
#define ONE_YEAR 3.156e7
int main(void)
{
    int year;
    printf("please input your year:");
    scanf("%d",&year);
    printf("%g s\n",year*ONE_YEAR);
    
    return 0;
}
