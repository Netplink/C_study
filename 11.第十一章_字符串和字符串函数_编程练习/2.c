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
    char nu[1];
    int num;

    puts("输入要读入的字符个数：");
    gets(&num);
    // num = atoi(nu);
    getchar(); // 吃掉回车

    puts("请输入字符:");
    Fun(a,num);
    putchar('\n');
    puts(a);

    return 0
}
void Fun(char *ar,int n){
    for(int i = 0;i < n;i++){
        *(ar+i) = getchar();
        *(ar+i+1) = '\0';
        if(isspace(*(ar+i))) // 遇到非数字字母 则停止读取输入
            break;
    }
}