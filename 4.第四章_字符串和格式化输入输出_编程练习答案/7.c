/*
7．编写一个程序，要求用户输入行驶的英里数和消耗汽油的加仑数。
接着应该计算和显示消耗每加仑汽油行驶的英里数，显示方式是在小数点右侧显示一个数字。
然后，根据1加仑约等于3.785升，1英里约等于1.609公里的规则，
它应该把每加仑英里数转换成每100公里的升数（欧洲通用的燃料消耗表示法），
并显示结果，显示方式是在小数点右侧显示一个数字（请注意，美国方案测量每单位距离消耗的燃料数，
而欧洲方案测量每单位燃料的行驶距离）。用符号常量表示两个转换系数（使用const或#define）。
*/
#include<stdio.h>
#define GALLON 3.785 //1 gallon = 2.785 litre 
#define MILE 1.609 //1 mile = 1.609 kilometer 
int main(void) 
{ 
    float mile,gallon; 
    printf("Please input miles and gallons:"); 
    scanf("%f %f",&mile,&gallon); 
    printf("Miles per gallon:%.1f\n",mile/gallon); 
    printf("Litres per 100 kilometre:%.1f\n",gallon*GALLON/(100*mile*MILE)); 
    return 0; 
}
