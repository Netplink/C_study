/*
1. 设计一个程序，统计输入到文件结尾的字符数。
 */
#include <stdio.h>
int main(void){
    int n = 0;
    
    printf("请输入：");
    while(getchar() != EOF){   // linux EOF Ctrl + D
        ++n;
    }
    putchar('\n');

    printf(" %d 个字符\n",n);

    return 0;
}