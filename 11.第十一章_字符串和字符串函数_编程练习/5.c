/*
 5.编写一个函数is_within()。它接受两个参数，一个是字符，另一个是字符串指针。其功能是如果字符在字符串中，就返回非0值（真）；如果字符不在字符串中，就返回0值（假）。在一个使用循环语句为这个函数提供输入的完整程序中进行测试。
 */

// Demo
#include <stdio.h>
#include <string.h>
int is_within(char ch,char *zz);
int main(int argc,char *argv[]){
    char test[999];
    char ch;
    int n;
    puts("请输入字符串：");
    fgets(test,999,stdin);
    test[strlen(test)-1] = '\0';
    fputs("请输入字符：",stdout);
    ch = getchar();
    n = is_within(ch,test);
    if(n == 0)
        printf("字符 %c 不在 %s 中\n",ch ,test);
    else
        printf("字符 %c 在字符 %s 中 索引是 %d\n",ch,test,n);

    return 0;
}
int is_within(char ch,char *zz){
    for(int i = 0;i < strlen(zz);i++){
        if(zz[i] == ch)
            return i;
    }

    return 0;

}