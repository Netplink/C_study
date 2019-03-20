/*
 8.修改第七题的假设a，使程序提供一个可选择工资等级的菜单。用switch选择工资等级。程序运行的开头应该像这样：
*****************************************************************
Enter the number corresponding to the desired pay rate or action:
1) $8.75/hr                     2) $9.33/hr
3) $10.00/hr                    4) $11.20/hr
5) quit
*****************************************************************
 */
#include <stdio.h>
#define OVERTIME 1.5
#define TR1 0.15
#define TR2 0.20
#define TR3 0.25
int main(void){
    while(1){
        int num;
        float basic;
        float time;
        float tr = 0;
        float allbasic = 0;

        printf("*****************************************************************\n");
        printf("Enter the number corresponding to the desired pay rate or action:\n");
        printf("1) $8.75/hr                     2) $9.33/hr\n");
        printf("3) $10.00/hr                    4) $11.20/hr\n");
        printf("5) quit\n");
        printf("*****************************************************************\n");

        printf("请输入：");
        scanf("%d",&num);
        switch(num){
            case 1: basic = 8.75;  break;
            case 2: basic = 9.33;  break;
            case 3: basic = 10.00;  break;
            case 4: basic = 11.20;  break;
            case 5: return 0;
            default : printf("\n请输入1到5选项！\n\n"); continue;
        }

        printf("请输入工作时间：");
        scanf("%f",&time);

        if(time <= 40)
            allbasic += time * basic;
        else if(time > 40)
                allbasic += (time - 40) * OVERTIME * basic + basic * 40;
            
        if(allbasic <= 300)
            tr += allbasic * TR1;
        else if(allbasic > 300 && allbasic <= 450)
            tr += (allbasic - 300) * TR2 + 300 * TR1;
        else if(allbasic > 450)
            tr += (allbasic - 450) * TR3 + 300 * TR1 + 150 * TR2;    

        printf("\n总工资: %g\n税金: %g\n净工资: %g\n\n",allbasic,tr,allbasic-tr);
        
    }
    return 0;
}