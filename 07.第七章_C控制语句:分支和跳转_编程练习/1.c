/*
 1.编写一个程序，该程序读取输入直到遇到#字符，然后报告读取的空格数据、读取的换行符数目以及读取的所有其他字符数目。
 */
#include <stdio.h>
int main(void){
    char ch;
    int space = 0;
    int wrap = 0;
    int other = 0;
    printf("请输入:");
    while((ch = getchar()) != '#'){
        if(ch == ' ')  ++space;
        else if(ch == '\n')  ++wrap;
        else  ++other;            
    }
    printf("空格个数：%d\n"
            "换行个数：%d\n"
            "其他个数：%d\n"
            ,space,wrap,other);

    return 0;
}