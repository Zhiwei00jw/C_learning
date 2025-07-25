/*逆序输入数组，顺序输出*/
#include <stdio.h>
#define MAXLINE 80
int main(){
    int j=0,k=0,i=0;
    char s[MAXLINE];
    char reverse;
    printf("Enter a string:");
    while((s[k]=getchar())!='\n'){
        k++;
    }
    s[k]='\0';
    i=k;
    for(j=0;j<=k/2;j++){
        reverse=s[j];
        s[j]=s[i-1];
        s[i-1]=reverse;
        i--;
    }       
    for(j=0;j<k;j++){
        printf("s[%d]=%c\n",j,s[j]);
    }
    system("pause");
    return 0;

}