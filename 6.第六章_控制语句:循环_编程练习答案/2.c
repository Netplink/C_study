/*
2．使用嵌套循环产生下列图案： 
$ 
$$ 
$$$ 
$$$$ 
$$$$$
*/
#include <stdio.h>
int main(void)
{
    for(int i = 1;i <= 5;i++)
    {
        for(int n = 1;n <= i;n++)
        printf("$");
        printf("\n");
    }
    return 0;
}
