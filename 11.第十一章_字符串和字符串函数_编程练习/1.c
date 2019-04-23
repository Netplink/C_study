/*
 1.设计并测试一个函数，可以从输入读取n个字符（包括空格，制表符和换行符），把结果存储在一个数组中，这个数组的地址通过参数来传递。
 */
#include <stdio.h>
#define LINELEN 81
void Fun(char *ar,int n);
int main(void){
    char a[LINELEN];
    int num;
    puts("输入要读入的字符个数：");
    scanf("%d",&num);
    getchar(); // 吃掉回车

    puts("请输入字符:");
    Fun(a,num);
    putchar('\n');
    puts(a);

    return 0;
}
void Fun(char *ar,int n){
    for(int i = 0;i < n;i++){
        *(ar+i) = getchar();
        *(ar+i+1) = '\0';
    }
}