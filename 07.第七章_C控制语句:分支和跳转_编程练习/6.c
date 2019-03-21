/*
 6.编写一个程序读取输入，直到#，并报告序列ei出现的次数。提示：记住前一个字符和当前字符，并用类似"Receive your eieio award"的输入来测试。
 */
#include <stdio.h>
int main(void){
    char ch1;
    int ch2 = ' ';
    int num;
    
    printf("请输入：");
    while((ch1 = getchar()) != '#'){
        if(ch1 == 'i' && ch2 == 'e')
            num++;
        
        ch2 = ch1;
    }

    printf("ei输出 %d 次\n",num);

    return 0;
}