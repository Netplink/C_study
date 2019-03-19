/*
1．编写一个程序，要求输入名字和姓氏，然后以“名字，姓氏”的格式打印。
*/
#include <stdio.h>
int main(void)
{
    char surname[20],firstname[20];
    printf("please input your surname:");
    scanf("%s",surname);
    printf("please input your firstname:");
    scanf("%s",firstname);
    printf("%s %s\n",surname,firstname);
    return 0;
}
