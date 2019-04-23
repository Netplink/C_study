// 元素更新
#include <stdio.h>
int main(void){
    int p = 666;
    int g = 3;
    int i = 8;
    int arr[] = {6,3,5,7,2,5,6,7};  // 八个元素

    puts("操作前：");
    for(int n = 0;n < i;n++)
        printf("\t arr[%d] = %d \n",n,*(arr+n));

    puts("操作后：");
    arr[g-1] = p;   // 更改第三个 元素
    for(int n = 0;n < i;n++)
        printf("\t arr[%d] = %d \n",n,*(arr+n));


    return 0;
}