/*借助二维数组，输入矩阵*/
#include <stdio.h>
#define MAXM 6
#define MAXN 6
int main(){
    int i=0,j=0,n=0,m=0;
    int a[MAXM][MAXN];
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter m:");
    scanf("%d",&m);
    //输入nxm个数据存入数组
    printf("Enter %dx%d intergers",n,m);
    /*
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
        */
    //输入矩阵，按照先列后行的顺序
    for(j=0;j<m;j++){
        for(i=0;i<n;i++){
            scanf("%d",&a[i][j]);
        }
    }
    //输出矩阵，按照正常顺序
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("a[%d][%d]=%d\n",i,j,a[i][j]);
        }
    }
    system("pause");
    return 0;
}