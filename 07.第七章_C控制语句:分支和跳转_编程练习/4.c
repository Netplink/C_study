/*
 4.利用if else语句编写程序读取输入，直到#。用一个感叹号代替每个句号，将原有的每个感叹号用两个感叹号代替，最后报告进行了多少次替代。
 */
#include <stdio.h>
int main(void){
    char ch;
    int n = 0;

    printf("请输入：");
    while((ch = getchar()) != '#'){
        if(ch == '.'){
            n++;
            putchar('!');
        }
        else if(ch == '!'){
            n++;
            putchar('!');
            putchar('!');
        }
        else
            putchar(ch);
    }

    printf("进行了 %d 次替代",n);

    return 0;
}