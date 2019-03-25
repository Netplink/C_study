/*
 10.编写并测试一个函数Fibonacci()，在该函数中使用循环替代递归完成斐波纳契数列的计算。
 */
#include <stdio.h>
long Fibonacci (int );
int main(void){
        int n;
        printf("Enter an integer (q to quit):\n");
        while (scanf("%d", &n) == 1){
                printf("The term %d of Fibonacci sequence is %d\n", n, Fibonacci (n));
                printf("Enter an integer (q to quit):\n");
        }
        printf("Done.\n");
        return 0;
}
long Fibonacci (int n){
        int n1,n2,temp,i;
        if(n >2)
                for(n1=1,n2=1,i=3; i<=n; i++){
                        temp = n1 + n2;
                        n1 = n2;
                        n2 = temp;
                } else
                        n2=1;
        return n2;
}