/*
1．编写一个程序，创建一个具有26个元素的数组，并在其中存储26个小写字母。
并让该程序显示该数组的内容。
*/
#include <stdio.h>
int main(void)
{
    char abc[26];
    for(int i = 0;i < 26;i++)
    {
        abc[i] = 'a' + i;
        printf("%c",abc[i]);
    }
    printf("\n");
    return 0;
}
