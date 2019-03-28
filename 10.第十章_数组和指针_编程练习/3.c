/*
 3.编写一个函数，返回一个int数组中存储的最大数值，并在一个简单的程序中测试这个函数。
 */
#include <stdio.h>
#define SIZE 6
int Fun(int *arr,int arr_size);
int main(void){
    int ar[SIZE] = {2,4,5,66,54,25};
    printf("%d\n",Fun(ar,SIZE));

    return 0;
}
int Fun(int *arr,int arr_size){
    int max = 0;
    for(int i = 0;i < arr_size;i++){
        if(*(arr+i) > max)
            max = *(arr+i);
    }
    return max;
}