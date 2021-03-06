/*
 6.编写一个程序，使其从标准输入读取字符，直到遇到文件结尾。对于每个字符，程序需要检查并报告该字符是否是一个字母。如果是的话，程序还应该报告该字母在字母表中的数值位置。例如c和C的字母位置都是3。可以先实现这样一个函数：接收一个字符参数，如果该字符为字母则返回该字母的数值位置，否则返回-1。 
 */

#include <stdio.h>
#include <ctype.h>
short fun(char ch);
int main(void){
    char ch;
    int n;
    while((ch = getchar()) != EOF){
        n = fun(ch);
        putchar(ch);
        if(n != -1)
            printf(" %n\n",n);
        else
            printf("%c 不是字母\n",ch);
    }

    return 0;
}

short fun(char ch){
    if(isalpha(ch)){
        if(islower(ch))
            return ch - 'a' + 1;
        if(isupper(ch))
            return ch - 'A' + 1;
    }else
        return -1;
}