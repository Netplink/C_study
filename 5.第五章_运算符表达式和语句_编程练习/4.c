/*
4．编写一个程序让用户按厘米输入一个高度值，然后，程序按照厘米和英尺英寸显示这个高度值。
允许厘米和英寸的值出现小数部分。程序允许用户继续输入，直到用户输入一个非正的数值。
程序运行的示例如下面所示： 
Enter a height in centimeters: 182 
182.0 cm = 5 feet, 11.7 inches 
Enter a height in centimeters(<=O to quit): 168 
168.0 cm = 5 feet, 6.1 inches 
Enter a height in centimeters(<=O to quit): 0 
bye
*/
#include<stdio.h>  
#define A 0.3937 //厘米与英寸 
#define B 0.0833  //英寸和英尺 
#define C 0.0328 //厘米和英尺
int main(void) 
{
float high, n;
int m;
printf("Enter a height in centimeters:");
scanf("%f", &high);
while (high > 0)
{
m = high * C;
n = (high * A) - (m / B); 
printf("%.1f cm = %d feet, %.1f inches\n", high, m, n);
printf("Enter a height in centimeters(<=0 to quit):");
scanf("%f", &high);
}
printf("bye\n");
return 0;  
}
