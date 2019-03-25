/*
 7.在程序清单6.20中，函数power()的功能是返回一个double类型数的某个正整数次冥。现在改进该函数，使其能正确地计算负冥。同时，用该函数实现0的任何次冥为0，并且任何数值的0次冥为1.使用循环的方法编写该函数并在程序中测试它。
 */
#include <stdio.h>
double power(double n,int p);
int main(void){
    double i;
    int n;

    printf("输入：");
    scanf("%lf %d",&i,&n);
    printf("%g",power(i,n));   

    return 0;
}
double power(double i,int n){
    double result = 1.0;
    int count;
 
    if(x == 0.0)
        return 0.0;
    if(y == 0)
        return 1.0;
    if(y > 0){
        for(count = 1;count <= y;count++)
            result *= x;
    }
    if(y < 0){
        for(count = 1;count <= -y;count++)
            result *= x;
        result = 1.0/result;
    }
    return result;
}