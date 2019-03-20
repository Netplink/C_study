/*
7. 编写程序，要求输入一周中的工作小时数，然后打印工资总额、税金以及净工资。作如下假设：
a，基本工资等级=10.00美元/小时
b，加班（超过40小时）=1.5倍的时间
c，税率 前300美元为15%，下一个150美元为20%，余下的位25%
用#define定义常量，不必关心本例是否符合当前的税法。
 */
#include <stdio.h>
#define BASIC 10
#define OVERTIME 15
#define TR1 0.15
#define TR2 0.20
#define TR3 0.25
int main(void){
    float time;
    float tr = 0;
    float allbasic = 0;

    printf("请输入：");
    scanf("%f",&time);

    if(time <= 40)
        allbasic += time * BASIC;
    else if(time > 40)
            allbasic += (time - 40) * OVERTIME + 400;
        
    if(allbasic <= 300)
        tr += allbasic * TR1;
    else if(allbasic > 300 && allbasic <= 450)
        tr += (allbasic - 300) * TR2 + 300 * TR1;
    else if(allbasic > 450)
        tr += (allbasic - 450) * TR3 + 300 * TR1 + 150 * TR2;    

    printf("总工资: %g\n税金: %g\n净工资: %g\n",allbasic,tr,allbasic-tr);

    return 0;
}