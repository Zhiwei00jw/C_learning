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
    /*
    for(k=0;k<month;k++)
    {
        days+=tab[index][k];
    }
    days+=day;
    */
   *pmonth=0;
   *pday=0;
   while(sum<=days){
        for(i_month=1;i_month<13;i_month++){
            if(days-sum<tab[index][i_month+1]){
                if(sum==days){
                    *pmonth=i_month-1;
                    *pday=tab[index][i_month-1];
                    break;
                }else if(sum<days){
                    *pmonth=i_month;
                    *pday=days-sum;
                    break;
                }                
            }
            sum+=tab[index][i_month];
        }
        break;
   }

}