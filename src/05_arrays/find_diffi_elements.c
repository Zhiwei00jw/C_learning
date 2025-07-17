/*查找两个数组非共有的元素*/
#include <stdio.h>
#define MAXN 10
int main(){
    int n=0,m=0,i=0,j=0,index=0,large=0,small=0;
    int a[MAXN]={0};
    int b[MAXN]={0};
    int c[MAXN]={0};
    large=n;
    small=m;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Please enter %d integers :",n); 
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("Enter m:");
    scanf("%d",&m);
    printf("Please enter %d integers :",m); 
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    //判断数组长度，防止后续数组比较时出现遗漏的情况
    if(n<=m){
        large=m;
        small=n;
        for(i=0;i<n;i++){
            c[i]=a[i];
        }
        for(i=0;i<m;i++){
            a[i]=b[i];
            b[i]=0;
        }
        for(i=0;i<n;i++){
            b[i]=c[i];
        }
    }

    for(i=0;i<large;i++){
        index=0;
        for(j=0;j<small;j++){
            if(a[i]==b[j]){
                index=1;
                break;
            }
        }
        if(index==0){
            printf("%d is not existing in the two arrays at the same time.\n",a[i]);
        }
    }
    system("pause");
    return 0;
    
}