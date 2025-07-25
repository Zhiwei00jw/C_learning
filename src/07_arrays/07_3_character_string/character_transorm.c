//数字字符转换
#include <stdio.h>
#define MAXLINE 10
int main(){
    int i=0,k=0;
    int sum=0;
    char s[MAXLINE];
    //输入数组
    printf("Enter a string:");
    while((s[k]=getchar())!='\n'){
        k++;
    }
    s[k]='\0';
    //遍历数组，将字符串中的数字存储到另一个数组中
    for(i=0;i<k;i++){
        if(s[i]>='0'&&s[i]<='9'){
            sum=sum*10+(s[i]-'0');//这行很关键，将字符'4'转换成十进制数字 4
        }
    }
    printf("The number is %d\n",sum);
    system("pause");
    return 0;

    
}