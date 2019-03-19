/*
16. Chuckie Lucky赢了100万美元，他把它存入一个每年赢得8%的帐户。在每年的最后一天，
Chuckie取出10万美元。编写一个程序，计算需要多少年Chuckie就会清空他的帐户。
*/
#include <stdio.h>
int main(void)
{   
    const int LI = 0.08;
    int i = 100;
    int k = 0;
    for(;i >= 0;i-=10)
    {
        i += i*LI;
        k++;
    }
    printf("%d %d\n",k,i);
    return 0;
}
