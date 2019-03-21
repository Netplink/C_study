/*
 11.ABC Mail Order Grocery 朝鲜蓟的售价是1.25美元/磅，甜菜的售价是0.65美元/磅，胡萝卜的售价是0.89美元/磅。
 在添加运输费用之前，他们为100美元的订单提供5%的打折优惠。对5磅或一下的订单收取3.50美元的运输费和装卸费用；
 超过5磅而不足20磅的订单收取10.00美元的运输和装卸费用；20磅或以上的运输，在8美元的基础上，每磅加收0.1美元。编写程序，
 在循环中使用switch语句，以便对输入a的响应是让用户所需的朝鲜蓟磅数，b为甜菜的磅数，c为胡萝卜的磅数，而q允许用户退出订购过程。
 然后程序计算总费用、折扣和运输费用（如果有运输费的话），以及总磅数。随后程序应该显示所有的购买信息：
 每磅的费用、订购的磅数、该订单每种蔬菜的费用、订单的总费用、折扣，如果有的话加上运输费用，以及所有费用的总数。
 */
#include <stdio.h>
#define A 1.25
#define B 0.65
#define C 0.89
#define QUIT 5.0
#define CR_D 100.0 
#define CR_D_RATE 0.05
#define CR_P1 5.0
#define CR_P2 20.0
#define CR_P_D1 3.5
#define CR_P_D2 10.0
#define CR_P_D3 8.0 
#define CR_P_D_R 0.1
float chose(void);
int main(void){
    float type,pan,pan1,pan2,pan3,pans,sum1,sum2,sum3,sum,pay,discount,transport;
    pan1 = 0.0;
    pan2 = 0.0; 
    pan3 = 0.0; 
    pans = 0.0;
    sum1 = 0.0;
    sum2 = 0.0; 
    sum3 = 0.0;
    discount = 0.0;

    while((type  = chose()) != QUIT){
        printf("How many pands do you want:\n");
        if(scanf("%f",&pan)){
            while(getchar() != '\n');   //过滤非首个数字和回车的垃圾输入缓存。 
            if(type == A){    
                sum1 += type * pan;  
                pan1 += pan;
            }
            else if(type == B){    
                sum2 += type * pan;  
                pan2 += pan;
            }
            else{    
                sum3 += type * pan;  
                pan3 += pan;
            }

            pans = pan1 + pan2 +pan3;
        }
    }
    pay = sum = sum1 + sum2 + sum3;
    if(sum >= CR_D)
        discount = sum * CR_D_RATE;
    pay -= discount;
    if(pans > 0.0){
        if(pans <= CR_P1)
            transport = CR_P_D1;
        else if(pans < CR_P2)
            transport = CR_P_D2;
        else
            transport = CR_P_D3 + pans * CR_P_D_R;
        pay += transport;
    }

    if(pan1 > 0.0)
        printf("globe artichoke $%.2f/pound,%.2f pounds is ordered,there $%.2f will be added for it\n",A,pan1,sum1);
    if(pan2 > 0.0)
        printf("beet $%.2f/pound,%.2f pounds is ordered,there $%.2f will be added for it\n",B,pan2,sum2); 
    if(pan3 > 0.0)
        printf("carrot $%.2f/pound,%.2f pounds is ordered,there $%.2f will be added for it\n",C,pan3,sum3); 
    printf("the summary is $%.2f\n",sum);
    if(discount > 0.0)
        printf("the discount is $%.2f\n",discount);
    printf("%.2f pounds goods you will pay $%.2f for it\n",pans,transport);
    printf("so ,finally,you will pay $%.2f for them.\n",pay);
    printf("Good Bye!\n");
    return 0;
}
float chose(void) {
    float type;
    char choice;
 
    do{
        printf("**************************************************************************\n");
        printf("Enter the letter chose your wants:\n"); 
        printf("a) globe artichoke $%.2f/pound              b) beet $%.2f/pound\n",A,B); 
        printf("c) carrot $%.2f/pound  \n",C); 
        printf("q) quit\n"); 
        printf("**************************************************************************\n");
        choice = getchar();
        while(getchar() != '\n');   //过滤非首个字母和回车的垃圾输入缓存。
        switch(choice){
            case 'a':type  = A;
                       break;
            case 'b':type  =  B;
                       break;
            case 'c':type  =  C;
                       break;
            case 'q':type  = QUIT;
                       break; 
            default:printf("bad choice,try again\n");
        }
    }while(choice != 'a' && choice != 'b' && choice != 'c' && choice != 'q');
    return  type;
}