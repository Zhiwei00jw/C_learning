/*使用顺序查找法逐个查找数组中是否有相应元素，并输出相应下标的最大值和最小值*/
#include <stdio.h>
#define MAXN 10
int main(){
    int a[MAXN]={0};
    int b[MAXN]={0};
    int n=0,x=0;
    int num=0;
    int i=0,j=0;
    int maxm=0;
    int min=0;
    printf("Enter n,x:");
    scanf("%d%d",&n,&x);
    printf("Enter %d integers",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //将所有符合条件的下标都储存到b[]中
    for(i=0;i<n;i++){
        if(a[i]==x){
            num++;
            b[j]=i;
            j++;
        }

    }//判断数组中是否有数与x相同
    if(num==0){
        printf("NOT FOUND");   
    }else{
        min=num;//遍历求得下标的最大值和最小值
        for(j=0;j<num;j++){
            printf("b[%d]=%d\n",j,b[j]);
            if(maxm<b[j])
                maxm=b[j];
            if(min>b[j])
                min=b[j];
        }
        printf("the maxm index is %d\n",maxm);
        printf("the minest index is %d\n",min);
       

    }
    
    system("pause"); 
    return 0;
}

