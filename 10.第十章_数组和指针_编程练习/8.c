/*
 8.编写一个程序，初始化一个3*5的二维double数组，并利用一个基于变长数组的函数把该数组复制到别一个二维数组。还要编写一个基于变长数组的函数来显示两个数组的内容。这两个函数应该能够处理任意的N*M数组（如果没有可支持变长数组的编译器，就使用传统C中处理N*5数组的函数方法）。
 */
#include <stdio.h>
#define ROWS 3
#define COLS 5
void Copy_Arr(int row,int col,double sou_ar[row][col],double ar[row][col]);
void Show_Arr(int row,int col,double ar[row][col]);
int main(void){
    double sou_arr[ROWS][COLS] = {
        {1.1,2.2,3.3,4.4,5.5},
        {5.5,4.4,3.3,2.2,1.1},
        {6.6,6.6,6.6,6.6,6.6}
    };
    double arr[ROWS][COLS];

    Show_Arr(ROWS,COLS,sou_arr);
    putchar('\n');
    Copy_Arr(ROWS,COLS,sou_arr,arr);
    Show_Arr(ROWS,COLS,arr);

    return 0;
}
void Copy_Arr(int row,int col,double sou_ar[row][col],double ar[row][col]){
    for(int i = 0;i < row;i++){
        for(int n = 0;n < col;n++)
            ar[i][n] = sou_ar[i][n];
    }
}
void Show_Arr(int row,int col,double ar[row][col]){
    for(int i = 0;i < row;i++){
        for(int n = 0;n < col;n++)
            printf("  %.1lf",ar[i][n]);

        putchar('\n');
    }
}