// 请编写代码实现功能: 求出100以内能整除9且不是偶数的各整数，并按从大到小的顺序输出
#include <stdio.h>
int main(void){
    for(int i = 100;i > 0;i--){
        int n = i % 9;
        if(n == 0 && i % 2 != 0)
            printf("%d\n",i);
    }

    return 0;
}