/*
5．编写一个程序打印一个表，表的每一行都给出一个整数、它的平方以及它的立方。
要求用户输入表的上限与下限。使用一个for循环。
*/
#include <stdio.h>
int main(void)
{
    int up,down;
    printf("请输入表的上限和下限:");
    scanf("%d %d",&up ,&down);
    for(;up - down >= 0;down++)
        printf("%d 平方 %d 立方 %d\n",down,down*down,down*down*down);
    return 0;
}
