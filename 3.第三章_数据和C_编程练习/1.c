/*
1．通过试验的方法（即编写带有此类问题的程序）观察系统如何处理整数上溢、
浮点数上溢和浮点数下溢的情况。
*/
#include<stdio.h> 
int main(void) 
{ 
    unsigned int a=4294967295; 
    float b=3.4E38; 
    float c=b*10; 
    float d=0.1234E-2; 
    printf("%u+1=%u\n",a,a+1); 
    printf("%e*10=%e\n",b,c); 
    printf("%f/10=%f\n",d,d/10); 
    return 0; 
}
