/*统计输入的选票，增加了Invalid判断分支*/
#include <stdio.h>
#define MAXN 1000
int main(){
    int a[MAXN]={0};
    int n=0,i=0;
    int cato[9]={0};
    int response=0;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter %d integers",n);
    //输入选票，对于不符合范围的输入重新输入
    for(i=0;i<n;i++){
        scanf("%d",&response);
        if(1<=response&&response<=8){
            a[i]=response;
        }else{
            printf("Invalid interger,please input right interger.");
            scanf("%d",&response);
            a[i]=response;

        }
    }
    //对应选票加1
    for(i=0;i<n;i++){
        cato[a[i]]++;
    }
    for(i=1;i<9;i++){
        printf("cato[%d]=%d\n",i,cato[i]);
    }
    system("pause");


}