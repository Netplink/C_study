/*
 7.利用练习2中的复制函数，把一个包含7个元素的数组内第3到第5元素复制到一个包含3个元素的数组中，函数本身不需要修改，只需要选择合适的实际参数（实际参数不需要是数组名和数组大小，而只需是数组元素的地址和需要复制的元素数目）
 */
#include <stdio.h>
#define SOU_ARR_SIZE 7
void copy_ptr(double *sou,double *ar2,int size);
void Show_Arr(double *arr,int size);
int main(void){
    double sou_arr[SOU_ARR_SIZE] = {
        34.3,43.3,532.4,543.3,6.6,4.57,945.5
    };
    double arr[3];

    Show_Arr(sou_arr,SOU_ARR_SIZE);
    putchar('\n');
    copy_ptr(sou_arr,arr,3);
    Show_Arr(arr,3);

    return 0;
}
void copy_ptr(double *sou,double *ar2,int size){
    for(int i = 0;i < size;i++){
        *(ar2+i) = *(sou+(size-1+i));
    }
}
void Show_Arr(double *arr,int size){
    for(int i = 0;i < size;i++){
        printf("   %.2lf",*(arr+i));
    }
    putchar('\n');
}