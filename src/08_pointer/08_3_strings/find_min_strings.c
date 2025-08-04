//输入n个字符串，找出其中最小的字符串；输入字符串，自定义min字符串，逐个比较，如果小就交换
#include <stdio.h>
#include <string.h>
#define MAXLINE 80
int main(){
    int n,i;
    char s[MAXLINE];
    char min[MAXLINE];
    //输入n
    printf("Enter n:");
    scanf("%d",&n);
    getchar(); // 清除输入缓冲区中的换行符
    printf("Enter %d strings",n);
    gets(s);
    strcpy(min,s);
    for(i=0;i<n-1;i++){
        gets(s);
        if(strcmp(min,s)>0){
            strcpy(min,s);
        }
    }
    printf("min string is %s",min);

    system("pause");
    return 0;

}