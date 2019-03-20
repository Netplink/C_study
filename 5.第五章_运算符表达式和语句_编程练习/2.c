/*
2．编写一个程序，此程序要求输入一整数，
然后打印出从（包括）输入的值到（包括）比输入的值大10的所有整数值（
也就是说，如果输入为5，那么输出就从5到15）。
要求在各个输出值之间用空格、制表符或换行符分开。
*/
#include <stdio.h>
int main(void)
{
    int num;
    int i;
    printf("please input:");
    scanf("%d",&num);
    i = num + 10;
    while(num++ <= i)
    {
        printf("%d ",num-1);
    }
    printf("\n");
    return 0;
}
