/*
 8.用递归函数重做第七题 
 */
#include <stdio.h>
double power_f(double x,int y);
int main(void)
{
    double x;
    int y;


    printf("Input a double and a int:\n");
    scanf("%lf %d",&x,&y);
    printf("the result is %lf\n",power_f(x,y));
    return 0;
}
double power_f(double x,int y)
{
    double result = 1.0;
    int count;
 
    if(x == 0.0)
        return 0.0;
    if(y == 0)
        return 1.0;
    if(y > 0)
    {
        result = x * power_f(x,y - 1);
    }
    if(y < 0)
    {
        result = x * power_f(x,-y - 1); //这里对y去反后，就调用递归函数的y > 0的情况，所以不会出现多次的取倒数。
        result = 1.0/result;
    }
    return result;
}