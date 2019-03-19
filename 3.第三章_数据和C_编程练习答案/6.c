/*
6.1个水分子的质量约为3.0×10^-23g，1夸脱水大约有950g。
编写一个程序，要求输入水的夸脱数， 然后显示这么多水中包含多少个水分子。
*/
#include <stdio.h>
#define WATRT 3e-23
#define KUATUO 950
int main(void)
{
    int i;
    printf("please input:");
    scanf("%d",&i);
    printf("包含 %g 个水分子\n",i*KUATUO/WATRT);
    
    return 0;
}
