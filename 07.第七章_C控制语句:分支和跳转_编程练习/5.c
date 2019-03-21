/*
 5.用switch重做第三题
 */
#include <stdio.h>
int main(void){
    int num;
    int even = 0;
    int even_t = 0;
    int odd = 0 ;
    int odd_t = 0;

    printf("请输入: ");
    while(scanf("%d",&num) == 1 && num != 0){
        switch(num % 2){
            case 0:
                even++;
                even_t += num;
                break;
            case 1:
                odd++;
                odd_t += num;
                break;
        }
    }
    
    printf("偶数的总个数：%d    平均值：%d\n",even,even_t/even);
    printf("奇数的总个数：%d    平均值：%d\n",odd,odd_t/odd);

    return 0;
}