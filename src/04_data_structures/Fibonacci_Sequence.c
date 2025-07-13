/*计算斐波那契数列前46个数，并按照每行5个的格式输出*/
#include <stdio.h>
#define MAXN 46 //宏定义定义符号常量，值为46，后续如果想要输出其他的值，可以直接修改宏定义；
int main(){
    int fib[MAXN]={1,1};
    int i,j;
    i=2;
    for(i;i>=2&&i<MAXN;i++){

        fib[i]=fib[i-1]+fib[i-2];
    }
    //输出斐波那契数列，实现功能，每输出5个就换行
    for(j=0;j<MAXN;j++){
        printf("%11d",fib[j]);
        if((j+1)%5==0){
            printf("\n"); //换行
        }
            
    }
        if(MAXN%5!=0)
            printf("\n");
    system("pause");  // 会显示 "Press any key to continue..."
    return 0;

}