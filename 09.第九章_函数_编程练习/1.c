/*
 1.设计函数min(x,y),返回两个double数值中较小的数值，同时用一个简单的驱动程序测试该函数。 
 */
// head.h
double min(double x, double y);


// min.c
#include <stdio.h>
#include "head.h"
double min(double x,double y){
    return x <= y ? x : y;
}


// main.c
#include <stdio.h>
#include "head.h"
int main(void){
    double n1,n2,n3;
    printf("输入两个数，返回较小的数：");
    scanf("%lf %lf",&n1 ,&n2);
    n3 = min(n1,n2);
    printf("%g 较小",n3);
    
    return 0;
}