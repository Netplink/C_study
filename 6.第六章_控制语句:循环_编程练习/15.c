/*
15. Daphne以10%的单利息投资了100美元(也就是说，每年投资赢得的利息等于原始投资的10%)。
Deirdre则以每年5%的复合利息投资了10O美元（也就是说，利息是当前结余的5%，其中包括以前的利息）。
编写一个程序，计算需要多少年Deirdre的投资额才会超过Daphne，并且显示出到那时两个人的投资额。
*/
#include<stdio.h> 
int main(void) 
{ 
    double Daphne=100,Deirdre=100; 
    int i=0; 
    while(Daphne>=Deirdre) 
    { 
        Daphne += 100 * 0.1; 
        Deirdre += Deirdre * 0.05; i++; 
    } 
    printf("After %d years,Deirdre's investment is %lf,Daphne's investment is %lf\n"
    ,i,Deirdre,Daphne);
    return 0; 
 }
