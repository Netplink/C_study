/*
 8.编写一个程序，显示一个菜单，为您提供加法、减法、乘法或除法的选项。获得您的选择后，该程序请求两个数，然后执行您选择的操作。该程序应该只接受它所提供的菜单选项。它应该使用float类型的数，并且如果用户未能输入数字应允许其重新输入。在除法的情况中，如果用户输入O作为第二个数，该程序应该提示用户输入一个新的值。一个典型的程序运行应该如下所示：
Enter the operation of your choice:
a. add       s. subtract
m. multiply   d. divide
q. quit
a
Enter first number: 22.4
Enter second number: one
one is not an number.
Please enter a number, such as 2.5. -1.78E8, or 3. 1
22.4 + 1 = 23.4
Enter the operation of your choice:
a. add        s. subtract
m. multiply   d. divide
q. quit
d
Enter first number: 18.4
Enter second number: O
Enter a number other than 0: 0.2
18.4 / 0.2 = 92
Enter the operation of your choice:
a. add        s. subtract
m. multiply   d. divide
q. quit
q
Bye.
 */
#include <stdio.h>
#define A '+'
#define S '-'
#define M '*'
#define D '/'
#define E '='

char get_method(void);
float get_float(void);
int main(void){

    char method,op;
    float n1,n2,result;

    while((method = get_method()) && method != 'q'){
        n1 = get_float();
        if(method == 'd'){
            while(1){
                n2 = get_float();
                if(n2 != 0.0)
                    break;
                else
                    printf("when method is \'/\',the scound number can not be 0\n");
            }
        }
        else
            n2 = get_float();

        if(method == 'a'){
            result = n1 + n2;
            op = A;
        }
        else if(method == 's'){
            result = n1 - n2;
            op = S;
        }
        else if(method == 'm'){
            result = n1 * n2;
            op = M;
        }
        else {
            result = n1 / n2;
            op = D;
        }

        printf("%.1f %c %.1f %c %.1f\n",n1,op,n2,E,result);
    }

    printf("Bye.\n");
    return 0;
}
char get_method(void){
    char ch;
    
    do{
        printf("Input the operation of your choice:\n");
        printf("a.add                s.subtract\n");
        printf("m.multiply         d.divide\n");
        printf("q.quit\n");
        ch = getchar();
        while(getchar() != '\n');
    }while(ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q');

    return ch;
}
float get_float(void){
    float f;
    int status;

    do{
        printf("Input the float number:");
        status = scanf("%f",&f);
        if(!status)
            printf("not a float number!\n");
        while(getchar() != '\n');
    }while(!status);

    return f;
}