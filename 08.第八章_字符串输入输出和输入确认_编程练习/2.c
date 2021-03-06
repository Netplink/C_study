/*
 2.编写一个程序，把输入作为字符流读取，直到遇到EOF。令该程序打印每个输入字符及其ASCII编码的十进制值。
 注意在ASCII序列中空格字符前面的字符是非打印字符，要特殊处理这些字符。如果非打印字符是换行符或制表符，
 则分期打印\n或\t。否则，使用控制字符符号。例如，ASCII的1是Ctrl+A，可以显示为^A。注意A的ASCⅡ值是Ctrl+A的值加64。
 对其他非打印字符也保持相似的关系。除去每次遇到一个换行符时就开始一个新行之外，每行打印10对值。
 */
#include <stdio.h>
#define NUM 64
#define CTRL '^'
int main(void){
    int n = 0;
    char ch;

    while((ch = getchar()) != EOF){
        if(ch == '\n'){
            printf("\\n");
            printf("%d",ch);
        }

        else if(ch == '\t'){
            printf("\\t");
            printf("%d",ch);
        }

        else if(ch < ' '){
            putchar(CTRL);
            putchar(ch + 64);
            printf("%d",ch);
        }

        else{
            putchar(ch);
            printf("%d",ch);
        }

        n++;
        if(n % 10 == 0)
            printf("\n");
    }

        printf("\n");
        return 0;
}
