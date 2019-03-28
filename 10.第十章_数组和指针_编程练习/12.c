/*
 12.编写…个程序，提示用户输入3个数集，每个数集包括5个double值。程序应当实现下列所有功能： 
    a．把输入信息存储到一个3x5的数组中
    b．计算出每个数集（包含5个数值）的平均值
    c．计算所有数值的平均数
    d．找出这15个数中的最大值．
    e．打印出结果
    每个任务需要用一个单独的函数来实现（使用传统C处理数组的方法）。对于任务b，需要编写计算并返回一维数组平均值的函数，循环3次调用该函数来实现任务b。
对于其他任务，函数应当把整个数组做为参数，并且完成任务c和d的函数应该向它的调用函数返回答案。
 */
#include <stdio.h>
#define ROW 3
#define COL 5
void get_arr(double (* arr)[COL],int n,int m);
void print_row_avg(double * arr,int m);
double avg(double (* arr)[COL],int n,int m);
double max(double (* arr)[COL],int n,int m);
void print_arr(double (* arr)[COL],int n,int m);
int main(void){
    double arr[ROW][COL];
    int i;
 
    get_arr(arr,ROW,COL);
    for(i = 0;i < ROW;i++)
        print_row_avg(arr[i],COL);
    printf("The average of arr is %.2f\n",avg(arr,ROW,COL));
    printf("The max of arr is %.2f\n",max(arr,ROW,COL));
    print_arr(arr,ROW,COL);

    return 0;
}
void get_arr(double (* arr)[COL],int n,int m){
    int i,j;

    printf("Input 15 double:\n");
    for(i = 0;i < n;i++){
        for(j = 0;j < m;j++)
            scanf("%f",&arr[i][j]);
    }
}
void print_row_avg(double * arr,int m){
    int i;
    double total = 0.0;

    for(i = 0;i < m;i++)
        total += arr[i];
    printf("average is %.2f\n",total / (float)m);
}
double avg(double (* arr)[COL],int n,int m){
    int i,j;
    double total = 0.0;

    for(i = 0;i < n;i++){
        for(j = 0;j < m;j++)
            total +=arr[i][j];
    }
    return total / (float)(n * m);
}
double max(double (* arr)[COL],int n,int m){
    int i,j;
    double max = arr[0][0];
    
    for(i = 0;i < n;i++){
        for(j = 0;j < m;j++)
            max = (max > arr[i][j])?max:arr[i][j];
    }
    return max;
}
void print_arr(double (* arr)[COL],int n,int m){
    int i,j;

    for(i = 0;i < n;i++){
        for(j = 0;j < m;j++)
            printf(" %.2f",arr[i][j]);
        printf("\n");
    }
}
