/*
4．编写—个程序，要求输入身高（以英寸为单位）和名字，然后以如下形式显示： 
Dabney, you are 6.208 feet tall 
使用float类型，使用/作为除号。如果您愿意，可以要求以厘米为单位输入身高，并以米为单位进行显示。
*/
#include <stdio.h>
#define MI 100
int main(void)
{
    float i;
    char name[25];
    printf("please input your name and height:");
    scanf("%s %f",name,&i);
    printf("%s, you are %g M tall\n",name,i/MI);
    return 0;
}
