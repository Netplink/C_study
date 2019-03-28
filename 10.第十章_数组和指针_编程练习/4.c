/*
 4.编写一个函数，返回一个double数组中存储的最大数值的索引，并在一个简单程序中测试这个函数。
 */
#include <stdio.h>
#define SIZE 10
short Fun(double *ar,short arr_size);
int main(void){
    double ar[SIZE] = {5.4,9.5,1.1,3.3,2.2,5.5,6.6,666.6,5.55,9.9};
    printf("%d\n",Fun(ar,SIZE));

    return 0;
}
short Fun(double *ar,short arr_size){
    int max = 0;
    short j = 0;
    
    for(short i = 0;i < arr_size;i++){
        if(max < *(ar+i)){
            max = *(ar+i);
            j = i;
        }
    }
    return j;
}