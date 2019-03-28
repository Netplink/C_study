/*
 13.下面是两个函数原型：
void show(double ar[], int n); //n是元素数
void show2(double ar2[][3], int n); //n是行数
a,编写一个函数调用，把包含数值8、3、9和2的复合文字传递给函数show()。
b,编写一个函数调用，把包含2行3列数值的复合文字传递给函数show2(),其中第一行为8、3、9；第二行为5、4、1。
 */
void show(double ar[],int n);
void show2(double ar2[][3],int n);

show((int []){8,3,9,2},4);
show2((int [][3]){{8,3,9},{5,4,1}},2);