/*
12.编写一个程序，创建一个8个元素的int数组，并且把元素分别设置为2的前8次幂，
然后打印出它们的值。使用for循环来设置值；为了变化，使用do while循环来显示这些值。
*/
#include <stdio.h>
#include <math.h> //编译时加 -lm  $gcc 12.c -lm
int main(void)
{
    const int NUM = 8;
    int num[NUM],i;
    for(i = 0;i < NUM;i++)
        num[i] = pow(2,i+1);
    i = 0;
    do
        printf("2的%d次幂:%d\n",i+1,num[i]);
    while(++i<NUM);
    return 0;  
}
