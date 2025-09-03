//n人围成一圈逐个报数，报到m的退出报数
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 函数声明
void count_number(int n,int m);

int main() {
    int n,m;
    printf("Enter total number n:\n");
    scanf("%d",&n);
    printf("Enter out number m:\n");
    scanf("%d",&m);
    count_number( n, m); // 调用报号函数
    system("pause");
    return 0;
}

// 函数定义
void count_number(int n,int m) {
    int i=0;
    int count=0;
    int *a;
    int people_left=n;
    //动态分配数组内存
    a=(int *)malloc(n*sizeof(int));
    if(a==NULL){
        printf("Memory allocation failed.\n");
        return;
    }
    for(i=0;i<n;i++){
        a[i]=i+1;
    }
    i=0;
    while(people_left>1){
        while(a[i]==0){
            i=(i+1)%n;
        }
        count++;
        if(count==m){
            printf("%d",a[i]);
            people_left--;
            a[i]=0; //报到号的标志位
            count=0;
        }
        i=(i+1)%n;
    }
    free(a);
    printf("Function count_number int n,int mis called.\n");
     // 第二个光标位置，跳到函数体内
}