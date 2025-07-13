/*计算斐波那契数列前46个数，并按照每行5个的格式输出*/
#include <stdio.h>

int main(){
    int fib[46]={1,1};
    int i,j;
    i=2;
    for(i;i>=2&&i<=45;i++){

        fib[i]=fib[i-1]+fib[i-2];
    }
    for(j=0;j<=45;j++){
        printf("%d\n",fib[j]);

    }
    system("pause");  // 会显示 "Press any key to continue..."
    return 0;

}