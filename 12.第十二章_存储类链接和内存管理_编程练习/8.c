/*
 8.下面是某程序的一部分：
//pe12-8.c
#include <stdio.h>
int * make_array(int elem,int val);
void show_array(const int ar[],int n);
int main(void)
{
    int * pa;
    int size;
    int value;
 
    printf("Enter the number of elements:");
    scanf("%d",&size);
    while(size > 0)
    {
        printf("Enter the initialization value:");
        scanf("%d",&value);
        pa = make_array(size,value);
        if(pa)
        {
            show_array(pa,size);
                free(pa);
        }
        printf("Enter the number of elements(<1 to quit):");
        scanf("%d",&size);
    }
    printf("Done.\n");
    return 0;
}
给出函数make_array()和show_array()的定义以使程序完整。函数make_array()接受两个参数。第一个时int数组的元素个数，第二个是要付给每个元素的值。函数使用malloc()来创建一个适当大小的数组，把每个元素设定为指定的值，并返回一个数组指针。函数show_array()以8个数一行的格式显示数组的内容。
 */
