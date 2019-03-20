/*
7. 1英寸等于2.54cm。编写一个程序，要求输入您的身高（以英寸为单位），
然后显示该身高值等于 多少厘米。如果您愿意，也可以要求以厘米为单位输入身高，
然后以英寸为单位进行显示。
*/
#include <stdio.h>
#define YINGCUN 2.54
int main(void)
{
    float height;
    printf("please input your height:");
    scanf("%g",&height);
    printf("%g 厘米等于 %g 英寸\n",height,height/YINGCUN);
    return 0;
}
