//对字符串进行凯撒密码加密操作
#include <stdio.h>
#define MAXLINE 80
#define M 26
int main(){
    int i=0;
    char s[MAXLINE];
    int offset=0;
    int k=0;
    //输入字符串数组和偏移量
    printf("Enter a string:");
    while((s[k]=getchar())!='\n'){
        k++;
    }
    s[k]='\0';
    printf("Enter offset:");
    scanf("%d",&offset);
    while(s[i]!='\0'){
        if(s[i]>='A'&&s[i]<='Z'){
            if(s[i]-'A'+offset<M){
                s[i]=s[i]+offset;
            }else{
                s[i]=s[i]-(M-offset);
            }
        }else if(s[i]>='a'&&s[i]<='z'){
                if(s[i]-'a'+offset<M){
                    s[i]=s[i]+offset;
                }else{
                    s[i]=s[i]-(M-offset);
                }
        }
        i++;                
    }
    //输出加密后的密码
    printf("After being encrypted:");
    i=0;
    while(s[i]!='\0'){
        putchar(s[i]);
        i++;
    }
    printf("\n");
    system("pause");
    return 0;

}