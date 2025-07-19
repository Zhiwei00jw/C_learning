/*方阵循环右移*/
#include <stdio.h>
#define MAXM 6
#define MAXN 6
int main()
{
    int i=0,j=0,m=0,n=0,k=0;
    int a[MAXM][MAXN];
    int c[MAXM][MAXN];
    printf("Enter n,m:");
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for ( j = 0; j < n; j++)
        {
            a[i][j]=i*n+j+1;
        }
        
    }
    //逐列循环移动
    for(i=0;i<n;i++)
    {
        //将a[i][0]开始的数移动到后面从m开始的位置
        j=0;
        for(k=m;k<n;k++)
        {
            c[i][k]=a[i][j];
            j++;
        }
        //将最后的 n-m 个数移动到前面
        k=0;
        for(j=n-m;j<n;j++)
        {
            c[i][k]=a[i][j];
            k++;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("c[%d][%d]=%d\n",i,j,c[i][j]);
        }
    }
    system("pause");
    return 0;
}