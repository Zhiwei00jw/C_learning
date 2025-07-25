/*设计函数，输入年份，月份，和日期，输出这一天在这一年是第多少天*/
#include <stdio.h>
int day_of_year(int year,int month,int day){
    int index=0,days=0,k=0;
    int tab[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
    //判断是否是闰年
    if ((year%4==0 && year%100!=0) || year%400==0)
    {
        index=1;
    }
   
    for(k=0;k<month;k++)
    {
        days+=tab[index][k];
    }
    days+=day;
    return days;
    
}
int main(){

    int year=0,month=0,day=0,days=0;
    printf("Enter year ,month ,day:");
    scanf("%d%d%d",&year,&month,&day);
    days=day_of_year(year,month,day);
    printf("day of the year :%d",days);
    system("pause");
    return 0;
}