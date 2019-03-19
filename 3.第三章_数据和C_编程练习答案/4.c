/*
4．编写一个程序，读入一个浮点数，并分别以小数形式和指数形式打印。
输出应如同下面格式（实际显示的指数位数也许因系统而不同）： 
The input is 21.290000 or 2.129000e+001.
*/
#include <stdio.h>
int main(void)
{
    double i;
    printf("please input:");
    scanf("%lf",&i);
    printf("The input is %lf or %e.\n",i,i);
    return 0;
}
