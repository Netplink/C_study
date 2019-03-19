/*
13.编写一个程序，创建两个8元素的double数组，使用一个循环来让用户键入第一个数组的8个元素的值。
程序把第二个数组的元素设置为第一个数组元素的累积和。
例如，第二个数组的第4个元素应该等于第一个数组的前4个元素的和，
第二个数组的第5个元素应该等于第一个数组的前5个元素的和
（使用嵌套循环可以做到这一点。
不过利用第二个数组的第5个元素等于第二个数组的第4个元素加上第一个数组的第5个元素这一事实，
可以避免嵌套而只使用单个循环来完成这个任务）。最后，使用一个循环来显示两个数组中的内容，
第一个数组在一行中显示，而第二个数组中的每个元素在第一个数组的对应元素之下进行显示。
*/
#include <stdio.h>
#include <string.h>
#define NUM 8
int main(void)
{
    double num1[NUM],num2[NUM];
    int i,n;
    printf("please input:");
    for(i = 0;i < NUM;i++)
    {
        scanf("%lf",&num1[i]);
        for(n = 0;n < NUM;n++)
            num2[i] += num1[n];
    }
    for(int j = 0;j < NUM;j++)
        printf("%-4g ",num1[j]);
    printf("\n");
    for(int j = 0;j < NUM;j++)
        printf("%-4g ",num2[j]);
    printf("\n");
    return 0;
}
