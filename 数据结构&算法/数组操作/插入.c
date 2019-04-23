// 插入元素
#include <stdio.h>
int main(void){
    int u;
    int i = 8;
    int c = 3;
    int p = 666;  // 需要插入的元素
    int arr[] = {6,3,5,7,2,5,6,7};  // 八个元素

    puts("操作前：");
    for(int n = 0;n < i;n++)
        printf("\t arr[%d] = %d \n",n,*(arr+n));

    puts("操作后："); // 插入到第3
    for(int n = c - 1,u = i;n < u;u--)  // arr[c-1] == arr[2] 
        arr[u] = arr[u-1];  // 元素后移一个单位   

    arr[c-1] = p;  // 插入

    for(int n = 0;n < i+1;n++)
        printf("\t arr[%d] = %d \n",n,*(arr+n));
    

    return 0;
}