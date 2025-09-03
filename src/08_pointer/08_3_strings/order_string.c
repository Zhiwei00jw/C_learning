//使用动态分配方式存储字符串，使用指针数组遍历字符串
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 函数声明
int input_string(char *poem[],char *str);
void anti_code_poem(char *poem[],char *str,int num);

int main() {
    int num;
    int i;
    char str[80];
    char *poem[20];
    num=input_string(poem,str); // 输入字符串
    anti_code_poem(poem,str,num);//解藏头诗
    puts(str);
    system("pause");
    return 0;
}

// 函数定义
int input_string(char *poem[],char *str) {
    int n=0;
    printf("Enter strings:\n");
    gets(str);
    while(*str!='#'){
        poem[n]=(char *)malloc(sizeof(char)*(strlen(str)+1));
        strcpy(poem[n],str);
        n++;
        gets(str);
        
    }
    printf("Function input_string is called.\n");
     // 第二个光标位置，跳到函数体内
     return n;
}
void anti_code_poem(char *poem[],char *str,int num){
    int i=0;
    for(i=0;i<num;i++){
        str[i]=*poem[i];
        free(poem[i]);
    }
    str[i]='\0';

}