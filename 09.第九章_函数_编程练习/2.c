/*
 2.设计函数chline(ch,i,j)，实现指定字符在i列到j列的输出，并用一个简单的驱动程序测试该函数。
 */
// chline.c
#include <stdio.h>
void chline(char ch,int i,int j){
    for(;i >= 0;i--)
        putchar(' ');

    for(;i <= j;i++){
        putchar(ch);
    }
    putchar('\n');
}


// main.c
#include <stdio.h>
void chline(char ch,int i,int j);
int main(void){
    char ch;
    int i,j;
    printf("请输入：");
    scanf("%c %d %d",&ch,&i,&j);
    chline(ch,i,j);
    
    return 0;
}
