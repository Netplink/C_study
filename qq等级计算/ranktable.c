#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "qupcount.h"

float ranktable(char *opt,char *para){    
    float table[4][9] = {
        {1.2, 1.4, 1.5, 1.6, 1.6, 1.7, 1.9, 0.0, 0.0},
        {1.5, 1.7, 1.8, 1.9, 1.9, 2.0, 2.2, 0.0, 0.0},
        {1.4, 1.6, 1.7, 1.8, 1.8, 1.9, 2.1, 2.2, 2.5},
        {1.7, 1.9, 2.0, 2.1, 2.2, 2.4, 2.7, 3.0, 3.2}
    };

    switch(*opt){
        case 'p' :
            puts("==========================================================");
            puts("+>            [1]  [2]  [3]  [4]  [5]  [6]  [7]  [8]  [9]");
            for(int i = 0;i < 4;i++){
                printf("+> ");
                switch(i){
                    case 0 : printf("[月 VIP]:  "); break;
                    case 1 : printf("[年 VIP]:  "); break;
                    case 2 : printf("[月SVIP]:  "); break;
                    case 3 : printf("[年SVIP]:  "); break;
                }
                for(int n = 0;n < 9;n++){
                    if(table[i][n] == 0.0)
                        printf("nil  ");
                    else
                        printf("%1.1f  ",table[i][n]);
                }
                putchar('\n');

            }
            puts("==========================================================");
            break;
        
    }

}