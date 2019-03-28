/*
 6.编写一个程序，初始化一个二维double数组，并利用练习2中的任一函数来把这个数组复制到另一个二维数组（因为二维数组是数组的数组，所以可以使用处理一维数组的函数来复制数组的每个子数组）。
 */
#include <stdio.h>
#define ROWS 4
#define COLS 4
void Fun(double (*sou_ar)[COLS],double (*ar)[COLS],int row,int col);
void Show_arr(double (*ar)[COLS],int row,int col);
int main(void){
    double arr[ROWS][COLS] = {
        {1.1,2.2,3.3,2.2},
        {6.6,7.7,8.8,64.4},
        {5.6,7.6,2.5,5.0},
        {43.5,54.0,6.0,4.5}
    };
    double arr1[ROWS][COLS];

    Show_arr(arr,ROWS,COLS);
    putchar('\n');
    Fun(arr,arr1,ROWS,COLS);
    Show_arr(arr1,ROWS,COLS);


    return 0;
}
void Fun(double (*sou_ar)[COLS],double (*ar)[COLS],int row,int col){
    for(int i = 0;i < row;i++){
        for(int n = 0;n < col;n++){
            *(*(ar+i)+n) = *(*(sou_ar+i)+n);
        }
    }
}
void Show_arr(double (*ar)[COLS],int row,int col){
    for(int i = 0;i < row;i++){
        for(int n = 0;n < col;n++)
            printf(" %.2lf",*(*(ar+i)+n));
        
        putchar('\n');
    }
}