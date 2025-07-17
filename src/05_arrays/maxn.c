/*求最大值及其下标*/
#include <stdio.h>
#define MAXN 10
int main(){
    int n=0,i=0,j=0,num=0,k=0;
    int index=1;
    int min=0;
    int a[MAXN]={0};
    int b[MAXN]={0};
    printf("Enter n:");
    scanf("%d",&n);
    printf("Please enter %d integers :",n); 
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //判断是否是最大值，将最大值的下标储存在b[]中
    for(i=0;i<n;i++){
        index=1;
        for(k=0;k<n;k++){
            if (a[i]<a[k])
            {
                index=0;
            }
            
        }
        if (index==1)
        {
            b[j]=i;
            printf("b[%d]=%d\n",j,b[j]);
            j++;
            num++;
        }
    
        
    } 
    //求下标中的最小值
    min=b[0];
    for(j=0;j<num;j++){
        if(min>b[j]){
            min=b[j];
            printf("min=%d\n",min);
        }
    }
    printf("The minimum index is %d.",min);
    system("pause");
    return 0;
    
      
}