/*
 5.修改程序清单8,4中的猜测程序，使其使用更智能的猜测策略。例如，程序最初猜50，让其询问用户该猜测值是大、小还是正确。如果该猜测值小，则令下一次猜测值为50和100的中值，也就是75。如果75大，则下一次猜测值为75和50的中值，等等。使用这种二分搜索(binary search)策略，起码如果用户没有欺骗，该程序很快会获得正确答案。
 */
#include <stdio.h>
#define LOW 1
#define UP 100
char get_input(void);
int main(void){

    int time = 1;
    int n1 = LOW;
    int n2 = UP;
    int guess;
    char ch;

    printf("This is a game:You will set a int number from 1 to 100\n");
    printf("I will guess it.if right:you input \'y\',if too big:you input
\'b\',if too small:you input \'s\'\n");
    printf("Now ,let\'s go\n");
    guess = (n2 + n1) / 2;
    printf("I guess it is %d\n",guess);

    while((ch = get_input()) && ch != 'y'){
        if((ch == 's' && guess == UP) || (ch == 'b' && guess == LOW)){
            printf("The value is from 1 to 100\n");
            continue;
        }

        if(ch == 's' &&  guess < UP )
            n1 = guess;
        else if(ch == 'b' && guess > LOW)
            n2 = guess;

        guess = (n2 + n1) / 2;
        printf("I guess it is %d\n",guess);
        time++;
    }
    printf("haha! used %d times\n",time);

    return 0;
}
char get_input(void){
    char ch;
  
    while((ch = getchar()) != 'y' && ch != 'b' && ch != 's')
        printf("input \'y\' or \'b\' or \'s\' not others\n");
    while(getchar() != '\n')
        continue;

    return ch;
}