/*逆序输入数组，顺序输出*/
#include <stdio.h>
#define MAXN 10
int main(){
    int i=0,j=0,n=0;
    int a[MAXN]={0};
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter %d integers:",n);
    for(i=n-1;i>=0;i--){
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++){
        printf("a[%d]=%d\n",j,a[j]);
    }
    system("pause");
    return 0;

}