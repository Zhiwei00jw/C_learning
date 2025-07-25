//十六进制字符串转换成十进制非负整数
#include <stdio.h>
#define MAXLINE 10
int main(){
    int i=0,k=0;
    char hex[MAXLINE];
    int number=0;
    //输入十六进制字符串，并过滤掉不属于十六进制的字符
    printf("Enter a hex string:");
    while((hex[i]=getchar())!='#'){
        if((hex[i]>='0'&&hex[i]<='9')||(hex[i]>='a'&&hex[i]<='f')||(hex[i]>='A'&&hex[i]<='F')){
            k++;
            putchar(hex[i]);
            printf("\n");
            i++;
        }
    }
    hex[k]='\0';
    //十六进制向十进制数转换
    for(i=0;i<k;i++){
        if(hex[i]>='0'&&hex[i]<='9'){
            number=number*16+hex[i]-'0';
        }else if(hex[i]>='a'&&hex[i]<='f'){
            number=number*16+hex[i]-'a'+10;
        }else if(hex[i]>='A'&&hex[i]<='F'){
            number=number*16+hex[i]-'A'+10;
        }
    }
    printf("number is %d\n",number);
    system("pause");
    return 0;
}