/*
1．您刚刚被MacroMuscle有限公司（Software for Hard Bodies）聘用。
该公司要进入欧洲市场，需要一个将英寸转换为厘米(1英寸=2.54 cm)的程序。
他们希望建立的该程序可提示用户输入英寸值。您的工作是定义程序目标并设计该程序（
编程过程的第1步和第2步）
*/
#include <stdio.h>
int main(void)
{
    float i;
    printf("plaese input:");
    scanf("%f",&i);
    printf("%g 厘米 等于 %g 英寸\n",i,i*2.54);
    return 0;
}
