/*
 3.编写一个程序，该程序读取整数，直到输入0.输入终止后，程序应该报告输入的偶数（不含0）总个数，偶数的平均值，输入的奇数综个数以及奇数的平均值。
 */
#include <stdio.h>
int main(void){
    int num;
    int even = 0;   // 偶数的个数
    int even_t = 0;     // 所有偶数的和
    int odd = 0;    // 奇数的个数
    int odd_t = 0;  // 所有奇数的和

    printf("请输入: ");
    while((scanf("%d",&num) == 1) && num != 0){
        if(num % 2 == 0){
            even++;
            even_t += num;
        }

        if(num % 2 != 0){
            odd++;
            odd_t += num;
        }
    }

    printf("偶数的总个数：%d    平均值：%d\n",even,even_t/even);
    printf("奇数的总个数：%d    平均值：%d\n",odd,odd_t/odd);
    
    return 0;
}