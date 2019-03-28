/*
 5.编写一个函数，返回一个double数组中最大的和最小的数之间的差值，并在一个简单的程序中测试这个函数。
 */
#include <stdio.h>
#define SIZE 6
double Fun(double *ar,int arr_size);
int main(void){
    double ar[SIZE] = {1.1,2.2,5.5,6.6,1.1,4.4};
    printf("%g\n",Fun(ar,SIZE));
    
    return 0;
}
double Fun(double *ar,int arr_size){
    double max = 0;
    double min = ar[4];
    for(int i = 0;i < arr_size;i++){
        if(ar[i] > max)
            max = ar[i];
        
        if(ar[i] < min)
            min = ar[i];
    }
    return max - min;
}