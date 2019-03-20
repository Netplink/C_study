/*
4．让程序要求用户输入一个大写字母，使用嵌套循环产生像下面这样的金字塔图案： 
    A 
   ABA 
  ABCBA 
 ABCDCDA 
ABCDEDCBA 
这种图案要扩展到用户输入的字符。例如，前面的图案是在输入E时需要产生的。
提示：使用一个外部循环来处理行，在每一行中使用三个内部循环，一个处理空格，一个以升序打印字母，
一个以降序打印字母。如果您的系统不使用ASCII或类似的以严格数字顺序表示字母的编码，
请参见在编程练习3中给出的建议。
*/
#include <stdio.h>
int main(void)
{
    char ch;
    printf("please input:");
    scanf("%c",&ch);
    for(int i = 0;i <= ch - 'A';i++)
    {
        for(int n = ch - 'A' -1;n >= i;n--)
        printf(" ");
        for(int j = 0; j <= i; j++)
        printf("%c",'A'+j);
        for(int k = i - 1; k >= 0; k--)
        printf("%c",'A'+k);
        printf("\n");
    }
    return 0;
}
