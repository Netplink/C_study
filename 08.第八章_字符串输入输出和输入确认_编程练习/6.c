/*
 6.修改程序清单8.8中的get_first()函数，使其返回所遇到的第一个非空白字符。在一个简单的程序中测试该函数。
 */
#include <stdio.h>
#include <ctype.h>
char get_first(void);
int main(void){
    char ch;
 
    printf("Input a text:\n");
    ch = get_first();
    printf("first not a spaces character is:");
    putchar(ch);
    printf("\n");

    return 0;
}
char get_first(void){
    char ch;
 
    while((ch = getchar()) && isspace(ch))
        continue;
    while(getchar() != '\n')
        continue;

    return ch;
}