/*
6．编写一个程序把一个单词读入一个字符数组，然后反向打印出这个词。
提示：使用strlen()（第4章）计算数组中最后一个字符的索引。
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    char ch[20];
    printf("please input:");
    scanf("%s",ch);
    int n = strlen(ch);
    for(;n >= 0;n--)
    {
        printf("%c",ch[n]);
    }
    printf("\n");
    return 0;
}
