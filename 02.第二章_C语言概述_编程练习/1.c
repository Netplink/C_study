/*
1．编写一个程序，调用printf()函数在一行上输出您的名和姓，
再调用一次printf()函数在两个单独的行上输出您的名和姓，
然后调用一对printf()函数在一行上输出您的名和姓。输出应如下所示（当然里面要换成您的姓名）： 
Anton Bruckner   第一个输出语句 
Anton            第二个输出语句 
Bruckner         仍然是第二个输出语句 
Anton Bruckner   第三个和第四个输出语句
*/
#include <stdio.h>
int main(void)
{
    printf("Anton Bruchner\n");
    printf("Anton \nBruchner\n");
    printf("Anton ");
    printf("Bruckner\n");
    return 0;
}
