/*
 2.在美国通常是以英里每加仑(mile/gallon)来计算油耗，在欧洲是以升每百公里(L/100km)来计算。下面是某陈谷的一部分，该程序让用户选择一个模式（公制的或美制的），然后手机数据来计算油耗。
//pe12-2b.c
#include <stdio.h>
#include "pe12-2a.h"
int main(void)
{
    int mode;
  
    printf("Enter 0 for metric mode,1 for US mode:");
    scanf("%d",&mode);
    while(mode >= 0)
    {
        set_mode(mode);
        get_info();
        show_info();
        printf("Enter 0 for metric mode,1 for US mode");
        printf("(-1 to quit):");
        scanf("%d",&mode);
    }
    printf("Done.\n");
    return 0;
}
下面是一些输出示例：
Enter 0 for metric mode,1 for US mode:0 
Enter distance traveled in kilometers:600
Enter fuel consumed in liters:78.8
Fuel consumption is 13.13 liters per 100 km.
Enter 0 for metric mode,1 for US mode(-1 to quit):1 
Enter distance traveled in miles:434 
Enter fuel consumed in gallons:12.7 
Fuel consumption is 34.2 miles per gallon. 
Enter 0 for metric mode,1 for US mode(-1 to quit):3 
Invalid mode specified.Mode 1 (US) used.
Enter distance traveled in miles:388 
Enter fuel consumed in gallons:15.3
Fuel consumption is 25.4 miles per gallon. 
Enter 0 for metric mode,1 for US mode(-1 to quit):-1 
Done.
如果用户键入了不正确的模式，程序向用户给出提示信息并选取最接近的模式。请提供一个头文件pe12-2a.h和一个源代码文件pe12-2a.c，来使程序可以运行。源代码文件应定义3个具有文件作用域、内部链接的变量。一个代表模式，一个代表举例，还有一个代表消耗的燃料。函数get_info()根据模式设置提示输入相应的数据，并将用户的回答存入文件作用域变量。函数show_info()根据所选的模式计算并显示燃料消耗值。
 */
