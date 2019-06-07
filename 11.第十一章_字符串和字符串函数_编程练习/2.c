/*
 2.修改并 测试第一题的函数，使得可以在n个字符后，或第一个空格、制表符、换行符后停止读取输入，由上述情况中最先满足的那个终止读取（不能用scanf()函数）。
 */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define LINELEN 81
void Fun(char *ar,int n);
int main(void){
    char a[LINELEN];
    char num[9999];

    puts("输入要读入的字符个数：");
    fgets(num,9999,stdin);

    puts("请输入字符:");
    Fun(a,atoi(num));
    putchar('\n');
    puts(a);

    return 0;
}
void Fun(char *ar,int n){
    char ch;
    for(int i = 0;i < n;i++){
        ch = getchar();
        if(!isspace(ch)){
            *(ar+i) = ch;
            *(ar+i+1) = '\0';
        }else
            break;
    }
}