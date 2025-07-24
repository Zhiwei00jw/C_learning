/*使用该函数判断n是否是完全平方数，返回判断得到的结果——是、否，还返回开方得到的数。不使用 math 库函数*/
#include <stdio.h>
int is_square(int n,int *m);
int main(){
    int n;
    int m=0;
    printf("Enter n:");
    scanf("%d",&n);
    if(is_square(n,&m)==1){
        printf("%d is a square.Its square root is %d.\n",n,m);
    }else{
        printf("%d is not a square.\n",n);
    }
    system("pause");
    return 0;

}
int is_square(int n,int *m){
    int i=1,sum=0;
    while(sum<n){
        sum+=i;
        if(sum==n){
            break;
        }
        i+=2;
    }
    if(sum==n){
        *m=(i+1)/2;
        return 1;
    }else{
        return 0;
    }

}