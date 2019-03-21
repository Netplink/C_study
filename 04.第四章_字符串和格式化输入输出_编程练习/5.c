/*
5.编写一个程序，首先要求用户输入名字，然后要求用户输入姓氏。
在一行打印输入的姓名，在下行打印每个名字中字母的个数。
把字母个数与相应名字 的结尾对齐，如下所示： 
Melissa Honeybee 
    　7        8 
然后打印相同的信息，但是字母个数与相应单词的开始对齐。
Melissa Honeybee
７      ８
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    char surname[20],firstname[20];
    printf("please your surname:");
    scanf("%s",surname);
    printf("please your firstname:");
    scanf("%s",firstname);
    printf("%s %s\n",surname,firstname);
    printf("%*d %*d\n\n",strlen(surname),strlen(surname),strlen(firstname),strlen(firstname));
    printf("%s %s\n",surname,firstname);
    printf("%-*d %-*d\n",strlen(surname),strlen(surname),strlen(firstname),strlen(firstname));
    return 0;
}
