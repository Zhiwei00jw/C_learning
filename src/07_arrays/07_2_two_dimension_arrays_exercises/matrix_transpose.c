/*生成矩阵，并生成矩阵的转置并输出*/
#include <stdio.h>
#define MAXN 6
#define MAXM 6
int main(){
    int i=0,j=0,n=0,temp=0;
    int a[MAXM][MAXN];
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
    //将矩阵的上三角转置,理解清矩阵转置的含义：交换a[i][j]和a[j][i]，所以使用交换数据的做法。
    for(i=0;i<=n-2;i++){
        for(j=i+1;j<=n-1;j++){
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    printf("\n");
    //输出转置后的矩阵
    for(i=0;i<n;i++){
        for ( j = 0; j < n; j++)
        {
           printf("a[%d][%d]=%d\n",i,j,a[i][j]);
        }
        
    }

    system("pause");
    return 0;
    
}