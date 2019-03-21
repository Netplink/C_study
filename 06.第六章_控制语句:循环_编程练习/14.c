/*
14.编写一个程序读入一行输入，然后反向打印该行。您可以把输入存储在一个char数组中；
假定该行不超过255个字符。回忆一下，您可以使用具有%c说明符的scanf()从输入中一次读入一个字符，
而且当您按下回车键时会产生换行字符(\n)。
*/
#include<stdio.h> 
#define LENGTH 20 
int main(void) 
{ 
    char a[255]; 
    int i; 
    for(i=0;i<LENGTH;i++) 
        scanf("%c",&a[i]); 
    for(i=LENGTH-1;i>=0;i--) 
        printf("%c",a[i]);
        
    printf("\n");
        
    return 0; 
}
