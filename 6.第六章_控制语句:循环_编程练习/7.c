/*
7．编写一个程序，要求输入两个浮点数，然后打印出用二者的差值除以二者的乘积所得的结果。
在用户键入非数字的输入之前程序循环处理每对输入值。
*/
#include <stdio.h>
int main(void)
{
    float a,b;
    printf("please input:");
    while(scanf("%f %f",&a,&b) == 2)
    {
        printf("%g\n",(a-b)/a*b);
        printf("please input:");
    }
    return 0;
}
