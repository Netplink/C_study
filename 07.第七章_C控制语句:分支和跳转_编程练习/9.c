/*
 9.编写一个程序，接受一个整数输入，然后显示所有小于或等于该数的素数。
 */
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int n,i,j;
    bool isprime;

    printf("请输入：");
    scanf("%d",&n);
    for(i = 2;i <= n;i++)
    {
        for(j = 2,isprime = true;(j * j) <= i;j++)
        {
            if(i % j == 0)
                isprime = false;
        }
        if(isprime)
            printf("   %d",i);
    }
    printf("\n");
    return 0;
}