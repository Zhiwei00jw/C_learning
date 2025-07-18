/*生成矩阵，并生成矩阵的转置并输出*/
#include <stdio.h>
#define MAXN 6
#define MAXM 6
int main(){
    int i=0,j=0,n=0;
    int a[MAXM][MAXN];
    int c[MAXM][MAXN];
    //生成nxn的方阵
    printf("Enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for ( j = 0; j < n; j++)
        {
            a[i][j]=i*n+j+1;
        }
        
    }
    for(i=0;i<n;i++){
        for ( j = 0; j < n; j++)
        {
           printf("a[%d][%d]=%d\n",i,j,a[i][j]);
        }
        
    }
    //将矩阵的上三角转置
    i=0;
    for(i=0;i<=n-2;i++){
        for(j=i+1;j<=n-1;j++){
            c[i][j]=a[j][i];
        }
    }
    //将矩阵的对角线和下三角转置
    for(i=0;i<=n-1;i++){
        for(j=0;j<=i;j++){
            c[i][j]=a[j][i];
        }
    }
    //输出转置后的矩阵
    for(i=0;i<n;i++){
        for ( j = 0; j < n; j++)
        {
           printf("c[%d][%d]=%d\n",i,j,c[i][j]);
        }
        
    }

    system("pause");
    return 0;
    
}