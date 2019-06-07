/*
 3.设计并测试一个函数，其功能是读取输入行里的第一个单词到数组，并丢掉该行中其他的字符。一个单词的定义是一串字符，其中不含空格、制表符和换行符。
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>
void Fun(char *s);
int main(int argc,char *argv[]){
    char str[9999];
    Fun(str);

    puts("\n ");
    puts(str);
    return 0;
}
void Fun(char *s){
    int i = 0;
    int j = 0;
    char str1[9999];
    fgets(str1,9999,stdin);
    while(1){
        if(str1[i] == ' ' || str1[i] == '\n' || str1[i] == '\t')
            i++;
        else
            break;
    }
    for(;i < strlen(str1)-1;i++){
        if(isalpha(str1[i])){
            s[j] = str1[i];
            j++;
        }
        else{
            s[j] = '\0';
            break;
        }
    }
}