#include <stdio.h>
#include <string.h>
int test(char *pp);
int main(int argc, char const *argv[])
{
    // int i;
    // char rr[10];
    // fgets(rr,10,stdin);
    
    // i = test(rr);

    // printf("%d",i);
    // putchar('\n');
    char *ii[5] = {"molu","hack","netplink"};
    char *yy = "molu";
    printf("%p\n",yy);
    printf("%p\n","molu");
    printf("%s    %p\n",*ii,ii);
    printf("%s    %p\n",*(ii+1),ii+1);
    printf("%d\n",sizeof(char));

    printf("%d\n",strlen(*ii));

    for(int i = 0;i < 8;i++){
        putchar(*(*(ii)+i));
    }

    return 0;
}
int test(char *pp){
    char *netp[4] = {"vip","VIP","svip","SVIP"};
    for(int i = 0;i <  2;i++){
        if(strncmp(*(netp+i),pp,3) == 0)    return 1;
        else if(strncmp(*(netp+2+i),pp,4) == 0)      return 1;
    }
    return 0;
}