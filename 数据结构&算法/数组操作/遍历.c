// 遍历数组
#include <stdio.h>
int main(void){
    int i = 8;   
    int arr[] = {6,3,5,7,2,5,6,7};  // 八个元素

    for(int n = 0;n < i;n++){
        printf("\t arr[%d] = %d \n",n,*(arr+n));
    }

    return 0;
}