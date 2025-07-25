/*输入一个字符串，判断该字符串是否是回文*/
#include <stdio.h>
#define MAXLINE 80
int main(){
    int i=0,j=0,k=0;
    char line[MAXLINE];
    //输入字符串,getchar()函数要如何使用？
    printf("Enter a string:");
    while((line[k]=getchar())!='\n'){
        k++;
        //printf("line[]=%d\n",k,line[k]);
    }
    line[k]='\0';
    //判断字符串是否是回文
    i=0;
    j=k-1;
    while(i<k){
        if(line[i]==line[j]){
            i++;
            j--;
        }else{
            break;
        }
    }
    if(i>=j){
        printf("The string you have input is a palindrom.");
    }else{
        printf("It's not a palindrom.");
    }
    system("pause");
    return 0;

}
