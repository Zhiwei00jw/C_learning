//分别使用数组和指针计算数组元素的和
#include <stdio.h>
#define MAX 10
void sum_(int *array,int *sum,int n);
int main(){
    int n;
    int sum = 0;
    int i;
    int a[MAX];
    int *p = a; // 指针p指向数组a的首元素
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
    //另一种使用指针计算数组元素和的方法
    /*
    sum = 0; // 初始化sum为0
    for(p=a; p < a + n; p++){ // p指向数组的首元素，直到数组末尾
        sum += *p; // 累加指针p所指向的值
    }   
    */
    
    printf("Sum = %d\n",sum);
    system("pause");
    return 0;
}
//以指针方式计算数组元素的和
void sum_(int *array,int *sum,int n){
    int i;
    *sum = 0; // 初始化sum为0
    for(i=0;i<n;i++){   //这里用了一个辅助变量i 去控制循环次数
        *sum+=*(array++);
    }
}