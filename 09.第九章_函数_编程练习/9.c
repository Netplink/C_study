/*
 9.为了使程序清单9.8中的函数to_binary()更一般化，可以在心的函数to_base_n()中使用第二个参数，且该参数的范围从2到10。然后，这个新函数输出第一个参数在第二个参数规定的进制数下的数值结果。例如，to_base_n(129,8)的输出时201，也就是129的八进制数值。最后在一个完整的程序中对该函数进行测试。 
 */
#include <stdio.h>
void to_base_n(int x,int y);
int main(void)
{
    int x,y;


    printf("Input a int for number and a int for like binary:\n");
    scanf("%d %d",&x,&y);
    to_base_n(x,y);
    printf("\n");
    return 0;
}
void to_base_n(int x,int y)
{
    int n1,n2;


    n1 = x /y ;
    n2 = x %y;
    if(n1 < y)
        putchar('0' + n1);
    else 
        to_base_n(n1,y);
    putchar('0' + n2);
}