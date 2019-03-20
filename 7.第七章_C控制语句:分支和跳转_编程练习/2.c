/*
 2.编写一个程序，该程序读取输入直到遇到#字符。使程序打印每个输入的字符以及它的十进制ASCII码，每行打印8个字符/编码对。建议：利用字符技术和模运算符（%）在每8个循环周期时打印一个换行符。
 */
#include <stdio.h>
int main(void){
    char ch;
    int num = 0;

    printf("请输入: ");
    while((ch = getchar()) != '#'){
        if(num % 8 == 0)
            putchar('\n');
        num++;

        if(ch == ' ')
            printf("\'%c\' %d    ",ch,ch);
        else
        printf("\'%c\' %d   ",ch,ch);    
    }

    putchar('\n');

    return 0;
}