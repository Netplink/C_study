// 删除元素
#include <stdio.h>
int main(void){
    int i = 8;
    int d = 3; // 删除的元素的位置  第3
    int arr[] = {6,3,5,7,2,5,6,7};  // 八个元素

    puts("操作前：");
    for(int n = 0;n < i;n++)
        printf("\t arr[%d] = %d \n",n,*(arr+n));

    puts("操作后：");
    for(int n = d-1;n < i;n++)
        arr[n] = arr[n+1];  // 元素前移一个单位

    for(int n = 0;n < i-1;n++)
        printf("\t arr[%d] = %d \n",n,*(arr+n));


    return 0;
}