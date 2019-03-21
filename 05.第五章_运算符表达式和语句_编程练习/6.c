/*
6.现在修改编程练习5中的程序，使它能够计算整数平方的和（ 如果您喜欢，可以这样认为：
如果您第一天得到$l，第二天得到$4，第三天得到$9，以此类推您将得到多少钱。
这看起来像一个很好的买卖）。C没有平方函数，但是您可以利用n的平方是n*n的事实。
*/
#include <stdio.h>
int main(void)
{
int count, sum, day, t;
sum = 0;
count = 0;
scanf("%d", &day);
while (count++ < day)
{
t = count * count; 
sum = sum + t;
}
printf("sum = %d\n", sum);
return 0;
}
