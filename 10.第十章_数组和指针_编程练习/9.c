/*
 9.编写一个函数，把两个数组内的相应元素相加，结果存储到第3个数组内。也就是说，如果数组l具有值2、4、5、8，数组2具有值1、0、4、6，则函数对数组3赋值为3、4、9、140函数的参数包括3个数组名和数组大小。并在一个简单的程序中测试这个函数。
 */
#include <stdio.h>
#define SIZE 5
void OperArr(int *sou1_arr,int *sou2_arr,int *arr,int arr_size);
void ShowArr(int *arr,int arr_size);
int main(void){
    int ar1[SIZE] = {2,3,4,1,5};
    int ar2[SIZE] = {3,4,2,1,6};
    int ar3[SIZE];

    ShowArr(ar1,SIZE);
    putchar('\n');
    ShowArr(ar2,SIZE);
    putchar('\n');

    OperArr(ar1,ar2,ar3,SIZE);
    ShowArr(ar3,SIZE);

    return 0;
}
void OperArr(int *sou1_arr,int *sou2_arr,int *arr,int arr_size){
    for(int i = 0;i < arr_size;i++){
        *(arr+i) = *(sou1_arr+i) + *(sou2_arr+i);
    }
}
void ShowArr(int *arr,int arr_size){
    for(int i = 0;i < arr_size;i++){
        printf(" %2d",arr[i]);
    }
    putchar('\n');
}