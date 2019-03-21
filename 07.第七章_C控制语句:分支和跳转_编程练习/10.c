/*
 10.1988年United States Federal Tax Schedule是近期最基本的。它分为4类，每类有两个等级。下面是其摘要；美元数为应征税的收入。
种类                    税金
单身                    前17,850美元按15%，超出部分按28%
户主                    前23,900美元按15%，超出部分按28% 
已婚，共有               前29,750美元按15%，超出部分按28% 
已婚，离异               前14,875美元按15%，超出部分按28% 

例如，有20000美元应征税收入的单身雇佣劳动者应缴税金0.15X17850美元+0.28+（20000美元-17850美元）。编写一个程序，让用户指定税金种类和应征税收入，然后计算税金。使用循环以便用户可以多次输入。
 */
#include <stdio.h>
#define ONE 17850
#define TWO 23900
#define THREE 29750
#define FOUR 14875

void Output(void);
float Oper(float ic,int tax);
void Input(float *ic);
int main(void){
    float income;
    float n;

    while(1){
        short c_type = 0;
        Output();
        printf("选择操作：");
        scanf("%d",&c_type);

        switch(c_type){
            case 1:  Input(&income);  n = Oper(income,ONE);  break;
            case 2:  Input(&income);  n = Oper(income,TWO);  break;
            case 3:  Input(&income);  n = Oper(income,THREE);  break;
            case 4:  Input(&income);  n = Oper(income,FOUR);  break;
            case 5:  return 0;
            default :  printf("输入错误！重新选择：");  getchar();  continue;
        }

        printf("***********\n税金：%g\n***********\n\n",n);
    }


    return 0;
}

void Output(void){
        printf("\n*********************************************************\n");
        printf("    种类                  税金\n");
        printf("  1.单身                  前17,850美元按15%%，超出部分按28%%\n");
        printf("  2.户主                  前23,900美元按15%%，超出部分按28%%\n");
        printf("  3.已婚，共有            前29,750美元按15%%，超出部分按28%%\n");
        printf("  4.已婚，离异            前14,875美元按15%%，超出部分按28%%\n");
        printf("  5.退出程序\n");
        printf("*********************************************************\n");
}

float Oper(float ic,int tax){
    float n = 0;

    if(ic <= tax)
        n = ic * 0.15;
    else
        n += (tax * 0.15) + (ic - tax) * 0.28;
    
    return n;
}

void Input(float *ic){
    while(printf("输入应征税收入："),(scanf("%f",ic) != 1) && ic < 0){
            printf("输入错误！\n");
    }
}