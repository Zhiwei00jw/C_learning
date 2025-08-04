//输入字符串，压缩字符串中相同的字母
#include <stdio.h>
#define MAXLINE 80
void zip(char *p);
int main(){
    char line[MAXLINE];
    printf("Enter a string:");
    gets(line);
    zip(line);
    puts(line);
    system("pause");
    return 0;
    
} 
void zip(char *p){
    char *q=p;
    int n;
    while(*p!='\0'){
        n=1;
        //统计n的个数
        while(*p==*(p+n)){  
            n++;
        }
        //将n转换成字符
        if(n>=10){
            *q++=n/10+'0';
            *q++=n%10+'0';
        }else if (n>=2)
        {
            *q++=n+'0';
        }
        //q新指针向后移动
        *q++=*(p+n-1);
        p=p+n;//p移动到下一个字符
        
    }
    *q='\0';//字符串结束标志；
}
