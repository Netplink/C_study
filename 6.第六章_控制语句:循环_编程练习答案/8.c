/*
8．对练习7进行修改，让它使用一个函数来返回计算值。
*/
#include <stdio.h>
float jisuan(float x, float y);
int main(void)  
{
    float a,b,c;
    printf("please input:");
    while(scanf("%f %f",&a,&b) == 2)
    {
        printf("%g\n",jisuan(a,b));
        printf("please input:");
    }
    return 0;
}
float jisuan(float x,float y)
{
    return (x-y)/x*y;
}
