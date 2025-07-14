/*使用顺序查找法逐个查找数组中是否有相应元素*/
#include <stdio.h>
#define MAXN 10
int main(){
    int a[MAXN];
    int n=0,x=0;
    int num=0;
    int i=0;
    printf("Enter n,x:");
    scanf("%d%d",&n,&x);
    printf("Enter %d integers",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]==x){
            num++;
            printf("index=%d\n",i);
        }

    }
    if(num==0)
    printf("NOT FOUND");
    system("pause"); 
    return 0;


    




}

