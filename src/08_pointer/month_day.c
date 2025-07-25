//输入年份和天数，输出对应的年、月、日。使用指针，以便于函数返回多个值
#include <stdio.h>
void month_day(int year,int days,int *pmonth,int *pday);
int main(){
    int year,month,day,days;
    printf("Enter year and days in order:");
    scanf("%d%d",&year,&days);
    month_day(year,days,&month,&day);
    printf("It's %d %d %d",year,month,day);
    system("pause");
    return 0;
}
void month_day(int year,int days,int *pmonth,int *pday){
    int index=0,k=0,sum=0;
    int i_month=0;
    int tab[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
    //判断是否是闰年
    if ((year%4==0 && year%100!=0) || year%400==0)
    {
        index=1;
    }
    //求月份和天数；和我的方法的不同之处，我是正向加，最后还需要用减法计算天数，这个直接是减法，且简化了判断条件
    for(k=1;days>tab[index][k];k++)
        days-=tab[index][k];
    *pmonth=k;
    *pday=days;


}