/*
2．编写一个程序，要求输入名字，并执行以下操作： 
a．把名字引在双引号中打印出来。 
b．在宽度为20个字符的字段内打印名字，并且整个字段引在引号内。 
c. 在宽度为20个字符的字段的左端打印名字，并且整个字段引在引号内。 
d．在比名字宽3个字符的字段内打印它。
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    char name[25];
    printf("please input your name:");
    scanf("%s",name);
    printf("A:\"%s\"\n",name);
    printf("B:\"%20s\"\n",name);
    printf("C:\"%-20s\"\n",name);
    printf("D:%*s\n",strlen(name)+3,name);
    return 0;
}
