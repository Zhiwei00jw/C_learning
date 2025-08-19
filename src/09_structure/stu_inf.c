//编写代码，输入n个学生的成绩信息——学号，姓名，三门课程成绩，计算并输出平均分最高的学生信息
#include <stdio.h>
#include <string.h>
#define MAX 80
//定义结构——学生信息
struct stu_inf{
    int number;
    char name[10];
    int computer,english,math;
    double average;
};
int main(){
    int n;
    int i;
    struct stu_inf stu,stu_max;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter %d students' number,name and courses' scores:\n",n);
    for(i=1;i<=n;i++){
        printf("No.%d:",i);
        scanf("%d%s%d%d%d",&stu.number,stu.name,&stu.computer,&stu.english,&stu.math);
        printf("\n");
        stu.average=(stu.computer+stu.english+stu.math)/3.0;
        if(i==1){
            stu_max=stu;
        }else if(stu_max.average<stu.average){
            stu_max=stu;
        }

    }
    printf("num:%d,name:%s,average:%.2lf\n",stu_max.number,stu_max.name,stu_max.average);
    system("pause");
    return 0;



}