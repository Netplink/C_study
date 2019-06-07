/*
 4.设计并测试一个函数，其功能是搜索由函数的第一个参数指定的字符串，在其中查找由函数的第二个参数指定的字符的第一次出现的位置，如果找到，返回指向这个字符的指针；如果没有找到，返回空字符（类似strchr()）。在一个使用循环语句为这个函数提供输入的完整程序中进行测试。
 */
#include <stdio.h>
char *Func(char *str1,char ch);
int main(void)
{
	char ch;
	char target[9999];
	char * pstr;
	puts("请输入字符串（在一行的开始处输入回车结束）：");
	while (fgets(target,9999,stdin) && target[0] != '\0')
	{
		puts("请输入字符：");
		ch = getchar();
		while (getchar() != '\n')
			;
		pstr = Func(target, ch);
		if (pstr == NULL)
			printf("字符%c不在字符串中\n", ch);
		else
			printf("找到字符%c,它的地址为%p\n", *pstr, pstr);
		
		puts("请输入下一个字符串（在一行的开始处输入回车结束：");
	}

	return 0;
}
char *Func(char *str1,char ch){
    while(*str1 != '\0'){
        if(*str1++ == ch)
            return str1-1;
    }
    return NULL;

}