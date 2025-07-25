//还是指针函数的应用，用指针传递计算计算的和与差
#include <stdio.h>
void sum_diff(double op1,double op2,double *psum,double *pdiff);
int main(){
    double op1,op2,sum,diff;
    printf("Enter op1 op2:");
    scanf("%lf%lf",&op1,&op2);
    sum_diff(op1,op2,&sum,&diff);
    printf("sum=%lf,diff=%lf\n",sum,diff);
    system("pause");
    return 0;
}
void sum_diff(double op1,double op2,double *psum,double *pdiff){
    *psum=op1+op2;
    *pdiff=op1-op2;
}
