/*
 5.编写并测试函数larger_of()，其功能是将两个double类型变量的数值替换成他们中的较大值。例如，larger_of(x,y)会把x和y中的较大值重新赋值给变量x和y。 
 */
// larger_of.c
#include <stdio.h>
double larger_of(double x,double y){
    return x > y ? x : y;
}

// main.c
#include <stdio.h>
double largar_of(double x,double y);
int main(void){
    double x,y;
    printf("输入：");
    scanf("%lf %lf",&x,&y);
    x = largar_of(x,y);
    y = largar_of(x,y);

    printf("x = %g ,y = %g",x,y);

    return 0;
}