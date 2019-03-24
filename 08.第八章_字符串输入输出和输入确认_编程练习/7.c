/*
 7.修改第7章的练习8，使菜单选项由字符代替数字进行标记。
 */
#include <stdio.h>
#define OVERTIME 1.5
#define TR1 0.15
#define TR2 0.20
#define TR3 0.25
int main(void){
    while(1){
        char ch;
        float basic;
        float time;
        float tr = 0;
        float allbasic = 0;

        printf("*****************************************************************\n");
        printf("Enter the number corresponding to the desired pay rate or action:\n");
        printf("a) $8.75/hr                     b) $9.33/hr\n");
        printf("d) $10.00/hr                    d) $11.20/hr\n");
        printf("q) quit\n");
        printf("*****************************************************************\n");

        printf("请输入：");
        scanf("%c",&ch);
        switch(ch){
            case a: basic = 8.75;  break;
            case b: basic = 9.33;  break;
            case c: basic = 10.00;  break;
            case d: basic = 11.20;  break;
            case q: return 0;
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