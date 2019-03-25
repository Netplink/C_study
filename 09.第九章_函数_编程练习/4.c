/*
4. 两数值的谐均值可以这样计算：首先对两数值的倒数取平均值，最后再取倒数。编写一个带有两个double参数的函数，计算这两个参数的谐均值。(为了测试，个人编写了驱动程序)
 */
#include <stdio.h>
double fun(double i,double j);
int main(void){
    double i,j;


    printf("请输入");
    scanf("%lf %lf",&i,&j);
    printf("%lf\n",fun(i,j));
    return 0;
}

double fun(double i,double j){
   return  1.0 / ((1.0 / i +1.0 / j) / 2.0);
}