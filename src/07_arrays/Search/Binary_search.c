/*二分查找法*/
#include <stdio.h>
#define MAXN 10
int main(){
    int a[MAXN]={0};
    int n=0;
    int low=0,high=0,mid=0;
    int i=0;
    int num=0;
    int x=0;
    int index=0;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Please enter %d integers in order:",n);
    //输入长度为n的有序数组，增加了一个判断数组是否有序的分支，若没有排列好，则重新输入比上一个数字大的新数字
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(num<=a[i]){

        }else{
            printf("Invalid inters,please enter right integer:");
            scanf("%d",&a[i]);
        }
        num=a[i];
    }
    printf("Enter x:");
    scanf("%d",&x);
    //二分查找部分
    low=0;
    high=n-1;
    //循环判断是否存在待查找数，退出条件是low>high
    while(low<=high){
        mid=(low+high)/2;
        if(x==a[mid]){
            index=1;
            break;
        }else if (x<a[mid])
        {
            high=mid-1;
        }else
        {
            low=mid+1;
        }
       // printf("low=%d,high=%d,mid=%d\n",low,high,mid);
        
    }
    if(index==0){
        printf("Not Found.");
    }else{
        printf("Index is %d.",mid);
    }
    
    system("pause");
    return 0;

}