/*
 10.编写一个程序，声明一个3x5的数组并初始化，具体数值可以随意。程序打印出数值，然后数值翻1番，接着再次打印出新值。编写一个函数来显示数组的内容，再编写另一个函数执行翻倍功能。数组名和数组行数作为参数由程序传递给函数
 */
#include <stdio.h>
#define ROWS 3
#define COLS 5
void OperArr(int row,int col,int arr[row][col]);
void ShowArr(int row,int col,const int arr[row][col]);
int main(void){
    int ar[ROWS][COLS] = {
        {1,2,3,4,5},
        {5,4,3,2,1},
        {6,6,6,6,6}
    };
    ShowArr(ROWS,COLS,ar);
    putchar('\n');
    OperArr(ROWS,COLS,ar);
    ShowArr(ROWS,COLS,ar);

    return 0;
}
void OperArr(int row,int col,int arr[row][col]){
    for(int i = 0;i < row;i++){
        for(int n = 0; n < col;n++)
            arr[i][n] *= 2;
    }
}
void ShowArr(int row,int col,const int arr[row][col]){
    for(int i = 0;i < row;i++){
        for(int n = 0;n < col;n++)
            printf("  %2d",arr[i][n]);

        putchar('\n');
    }
}