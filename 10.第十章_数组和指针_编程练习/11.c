/*
 11.重写程序清单10.7的程序rain，main()中的主要功能改为由函数来执行。(针对若干年的降水量数据，计算年降水总量、年降水平均量，以及月降水平均量)
 */
#include <stdio.h>
#define MONTHS 12
#define YEARS 5
void yearly(const float (*ptr)[MONTHS],int n,int m);
void monthly(const float (*ptr)[MONTHS],int n,int m);
int main(void){
    const float rain[YEARS][MONTHS] = {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };
    const float (*ptr) [MONTHS];
    ptr = rain;

    yearly(ptr,YEARS,MONTHS);
    monthly(ptr,YEARS,MONTHS);
    return 0;
}
void yearly(const float (*ptr)[MONTHS],int n,int m){
    int year,month;
    float subtot,total;

    printf(" YEAR   RAINFALL(inches) \n");
    for(year = 0,total = 0;year < n;year++){
        for(month= 0,subtot = 0;month < m;month++)
            subtot += *(*(ptr + year) + month);
        printf("%5d %15.1f\n",2000 + year,subtot);
        total += subtot;
    }
    printf("\nThe yearly average is %.1f inches.\n\n",total/n);
}
void monthly(const float (*ptr)[MONTHS],int n,int m){
    int year,month;
    float subtot;

    printf("MONTHLY AVERAGES: \n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Ict ");
    printf(" Nov  Dec \n");

    for(month = 0;month < m;month++){
        for(year = 0,subtot = 0;year < n;year++)
            subtot += *(*(ptr + year) + month);
        printf("%4.1f ",subtot/n);
    }
    printf("\n");
}