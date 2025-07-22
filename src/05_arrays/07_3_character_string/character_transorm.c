//数字字符转换
#include <stdio.h>
#define MAXLINE 10
int main(){
    int i=0,k=0,j=0;
    int sum=0;
    char s[MAXLINE];
    int num[MAXLINE];
    //输入数组
    printf("Enter a string:");
    while((s[k]=getchar())!='\n'){
        k++;
    }
    s[k]='\0';
    //遍历数组，将字符串中的数字存储到另一个数组中
    for(i=0;i<k;i++){
        if(s[i]>='0'&&s[i]<='9'){
            num[j]=s[i]-'0';
            j++;
        }
    }
    //将数组中的数生成为一个数字
    for(i=0;i<j;i++){
        sum+=num[i];
        sum*=10;
    }
    sum=sum/10;
    printf("The number is %d\n",sum);
    system("pause");
    return 0;

    
}