#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "qupcount.h"

void HelpDoc(void);
int main(int argc,char *argv[]){
    if(argc < 2){
        puts(" [!] 错误: 没有指定操作 (使用 -h 获取帮助)");
    }else if(strcmp("-h",argv[1]) == 0){
        HelpDoc();
    }else
        ranktable(argv[1],argv[2]);

    return 0;
}
void HelpDoc(void){
    puts(" -------------- qupc --------------");
    puts(" --- 计算QQ等级升级所需天数");
    puts(" --- by: 无岸     QQ:168171061");
    puts(" [+] [-p] 显示会员加速倍数表");
    puts(" [+] [--help] or [-h] 帮助");

}