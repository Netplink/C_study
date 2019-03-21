/*
10.编写一个程序把8个整数读入一个数组中，然后以相反的顺序打印它们。
*/
#include <stdio.h>
#include <string.h>
int main(void)
{   const int NUM = 8;
    int num[NUM];
    printf("please input:");
    for(int i = 0;i < NUM;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int n = NUM - 1;n >= 0;--n)
    {
        printf("%d ",num[n]);
    }
    printf("\n");
    return 0;
}
