// 搜索元素
#include <stdio.h>
int main(void){
    int q = 0;
    int p = 7;  // 需要搜索的元素
    int i = 8;
    int arr[] = {6,3,5,7,2,5,6,7};  // 八个元素
    int sav[i];  //保存 arr 数组的索引

    puts("遍历数组：");
    for(int n = 0;n < i;n++)
        printf("\t arr[%d] = %d \n",n,*(arr+n));

    // 搜索
    for(int n = 0;n < i;n++){
        if(arr[n] == p){
            sav[q] = n;   // 保存索引
            q += 1;   // 计数
        }
    }
    printf("  arr[]数组有 %d 个元素为 7 \n  索引为：",q);
    for(int n = 0;n < q;n++)
        printf(" %d",sav[n]);

    putchar('\n');

    return 0;
}