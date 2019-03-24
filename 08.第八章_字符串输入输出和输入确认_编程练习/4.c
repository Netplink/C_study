/*
 4．编写一个程序，把输入作为字符流读取，直至遇到EOF。令其报告每个单词的平均字母数。不要将空白字符记为单词中的字母。实际上，标点符号也不应该计算，但现在不必考虑这一点

(如果您想做得好一些，可以考虑使用ctype.h系列中的ispunct()函数）。
 */
#include <stdio.h>
#include <ctype.h>
int main(void){
    char ch1;
    char ch2 = ' ';
    int n_char;
    int n_word;

    printf("请输入：");
    while((ch1 = getchar()) != EOF){
        if(ispunct(ch2) || isspace(ch2)){
            if(isalnum(ch1)){
                n_char++;
                ch2 = ch1;
            }else
                ch2 = ch1;
        }else{
            if(isalnum(ch1)){
                n_char++;
                ch2 = ch1;
            }else
                n_word++;
                ch2 = ch1;
        }
    }

    printf("\n有 %d 个字母，有 %d 个单词，平均每个单词有 %g 个字母\n",n_char ,n_word ,(float)n_char/n_word);

    return 0;
}