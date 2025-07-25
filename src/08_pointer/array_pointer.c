//分别使用数组和指针计算数组元素的和
#include <stdio.h>
#define MAX 10
void sum_(int *array,int *sum,int n);
int main(){
    int n;
    int sum = 0;
    int i;
    int a[MAX];
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter %d integers:",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sum_(a, &sum,n);
    for(i=0;i<n;i++){
        printf("%d\n ",a[i]);
    }
    printf("Sum = %d\n",sum);
    system("pause");
    return 0;
}
//以指针方式计算数组元素的和
void sum_(int *array,int *sum,int n){
    int i;
    *sum = 0; // 初始化sum为0
    for(i=0;i<n;i++){
        *sum+=*(array++);
    }
}