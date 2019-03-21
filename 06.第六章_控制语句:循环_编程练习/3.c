/*
3．使用嵌套循环产生下列图案： 
F 
FE 
FED 
FEDC 
FEDCB 
FEDCBA 
请注意：如果您的系统不使用ASCⅡ或其他以数字顺序编码的码，
您可以把一个字符数组初始化为字母表中的字母： 
char lets[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
然后就可以使用数组索引来选用单个的字母，例如lets[0]是'A'，等等。
*/
#include <stdio.h>
int main(void)
{
    for(int i = 0;i < 6;i++)
    {
        for(int n = 0;n <= i;n++)
        printf("%c",'F'-n);
        printf("\n");
    }
    return 0;
}
