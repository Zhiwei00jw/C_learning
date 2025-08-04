//系统库中存在处理字符串相关的程序，我自己如何实现这些功能
#include <stdio.h>
#include <string.h>
#define MAXS 80
void my_gets(char *s);
void my_puts(char *s);
char * my_strcpy(char *s1,char* s2);
char * my_strcat(char *s1,char* s2);
int my_strlength(char *s1);
int main(){
    char s[MAXS];
    char *scpy;
    int n;
    printf("Enter s:");
    my_gets(s);
    n=my_strlength(s);
    printf("length is %d",n);
    scpy=my_strcat(s,"happy");
    printf("scpy is:");
    my_puts(scpy);
    system("pause");
    return 0;
}
//自己实现 gets(s)函数，允许输入的字符带空格
void my_gets(char *s){
    char *pc=s;
    while((*pc=getchar())!='\n'){
        pc++;
    }
    *pc='\0';
}
//自己实现 puts(s)函数
void my_puts(char *s){
    char *pc=s;
    while(*pc!='\0'){
        printf("%c",*pc);
        pc++;
    }   
    printf("\n");
}
//自己实现char * strcpy(char *s1,char *s2)函数
char * my_strcpy(char *s1,char*s2){
    char *p=s1;
    while(*s2!='\0'){
        *p++=*s2++;//不可以用p=s2,这样的话p直接指向新地址，而不指向原来s1的地址了，那s1的值也就不会改变了
    }
    *p=*s2;
    return s1;
}
//自己实现char * strcat(char *s1,char* s2)函数
char * my_strcat(char *s1,char* s2){
    char *p=s1;
    while(*p!='\0'){
        p++;
    }
    while(*s2!='\0'){
        *p++=*s2++;
    }
    *p=*s2;
    return s1;
}
//自己实现str_length的功能
int my_strlength(char *s1){
    char *p=s1;
    int num=0;
    while(*p!='\0'){
        p++;
        num++;
    }
    return num;

}