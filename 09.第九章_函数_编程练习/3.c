/*
 3.编写一个函数，包含三个参数，第一个是字符，表示需要打印的字符，第二个整数，是每行需要打印的个数，第三个是整数，是需要打印的行数，用一个程序来测试该函数。
 */
// show_ch.c
#include <stdio.h>
void show_ch(char ch,int i,int j){
    for(;j >= 0;j--){
        for(; i >= 0;i--)
            putchar(ch);

        putchar('\n');
    }
}

// main.c
#include <stdio.h>
void show_ch(char ch,int i,int j);
int main(void){
    char ch;
    int i,j;
    printf("输入：");
    scanf("%c %d %d",&ch,&i,&j);
    show_ch(ch,i,j);

    return 0;
}