/*使用该函数判断n是否是完全平方数，返回判断得到的结果——是、否，还返回开方得到的数。不使用 math 库函数*/
#include <stdio.h>
int is_square(int n,int *m);
int gcd(int m,int n);
int is_prime(int n);
void pyramid(int n);
void fact_s(int n);
int main(){
    int n;
    int m=0;
    /*
    //判断一个数是否是完全平方数
    printf("Enter n:");
    scanf("%d",&n);
    if(is_square(n,&m)==1){
        printf("%d is a square.Its square root is %d.\n",n,m);
    }else{
        printf("%d is not a square.\n",n);
    }
        */
    /*
    //求最大公约数
    printf("Enter m,n:");
    scanf("%d%d",&m,&n);
    printf("gcd(m,n)=%d\n",gcd(m,n));
    system("pause");
    return 0;
    */
   /*
   //判断是否是素数
   printf("Enter n:");
   scanf("%d",&n);
   if(is_prime(n)==1){
    printf("%d is prime.\n",n);
   }else{
    printf("%d is not a prime.\n",n);
   }
    */
   printf("Enter n:");
   scanf("%d",&n);
   pyramid(n);
   system("pause");
   return 0;


}
int is_square(int n,int *m){
    int i=1,sum=0;
    while(sum<n){
        sum+=i;
        if(sum==n){
            break;
        }
        i+=2;
    }
    if(sum==n){
        *m=(i+1)/2;
        return 1;
    }else{
        return 0;
    }

}
//求最大公约数函数，使用辗转相除法
int gcd(int m, int n)
{
    int r;
    int temp;
    //如果m<n，交换m和n的值
    if(m<n){
        temp=m;
        m=n;
        n=temp;
    }
    while(n!=0){
        r=m%n;
        if(r==0){
            return n;
            break;
        }else{
            m=n;
            n=r;
        }

    }
}
//判断是否是素数的函数
int is_prime(int n){
    int i=2;
    //1不是素数
    if(n==1)
        return 0;
    //2是素数
    if(n==2)
        return 1;
    //对于大于2的整数，判断它是否可以被除 1 和自己本身的意外的数整除
    if(n>2){
        for(i=2;i<n/2;i++){
            if(n%i==0){
                return 0;
            }        
        }

    }
    return 1;
}
//数字金字塔函数
void pyramid(int n)
{
    int i;
    int j;
    for(i=1;i<=n;i++){
        for(j=1;j<=(n-i);j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",i);
            printf(" ");
        }
        printf("\n");
    }
}
//调用含有静态变量的函数fact_s输出从1！到n！的值
void fact_s(int n){
    static int sum=1;
    //因为sum是静态变量，所以可以存储每一次计算的值，这里利用要输出的是从1~n的所有阶乘，才可以这么做
    sum=sum*n;
    return sum;

}