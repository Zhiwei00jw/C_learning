#include <stdio.h>
#include <stdlib.h>
//定义时间结构类型变量
struct time{
    int hour,minute,second;
};


// 函数声明
void time_change_unit(struct time  *my_time,int n);

int main() {
    struct time my_time,*p_time;
    int n;
    //输入当前时间值和秒数
    printf("Enter time hour minute second and seconds n:");
    scanf("%d%d%d%d",&my_time.hour,&my_time.minute,&my_time.second,&n);
    p_time=&my_time;
     time_change_unit(p_time,n); // 调用自定义函数
     //输出+n秒后的值
     printf("%d:%d:%d",my_time.hour,my_time.minute,my_time.second);
     system("pause");
    return 0;
}

// 函数定义
void time_change_unit(struct time *my_time,int n) {
    my_time->second+=n;
    if(my_time->second>=60){
        my_time->minute++;
        my_time->second-=60;
        if(my_time->minute>=60){
            my_time->hour++;
            my_time->minute-=60;
            if(my_time->hour>=24){
                my_time->hour=0;
            }
        }
    }
    printf("Function time_change_unit is called.\n");
     // 第二个光标位置，跳到函数体内
}