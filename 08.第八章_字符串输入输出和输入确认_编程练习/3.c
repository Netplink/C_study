 /*
  3.编写一个程序，把输入作为字符流读取，直至遇到EOF。令其报告输入中的大写字母个数和小写字母个数。假设小写字母的数值是连续的，大写字母也是如此。或者你可以使用ctypc.h库中的合适的函数来区分大小写。
  */
#include <stdio.h>
#include <ctype.h>
int main(void){
    char ch;
    int upper = 0;
    int lower = 0;

    printf("请输入：");
    while((ch = getchar()) != EOF){ // linux EOF  Ctrl + D
        if(isupper(ch))
            upper++;
        else if(islower(ch))
            lower++;
        else
            continue;
    }

    printf("\n大写字母：%d\n小写字母：%d\n",upper,lower);


    return 0;
}