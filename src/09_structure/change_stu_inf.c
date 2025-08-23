//存储好学生信息后，修改对应学号学生的课程成绩；难点在于，课程名称，字符串如何判断相等？
//使用字符串比较函数str_cmp
#include <stdio.h>
#include <string.h>
#define MAX 50
struct stu_inf{
    int number;
    char name[10];
    int computer,english,math;
    double average;
};
//待修改的结构变量
struct stu_inf *stu_chan;

int main(){
    struct stu_inf students[MAX]={{101,"wang",82,82,82,82.0},{102,"jin",89,92,96,92.3},{103,"xian",99,96,97,97.33},{104,"yu",78,69,98,81.67}};
    int number;
    char subject[MAX];
    int i;
    //输入要修改的学生信息
    printf("Enter students' number and subject:\n");
    printf("number:");
    scanf("%d",&number);
    getchar();
    printf("subject:");
    gets(subject);
    //在结构数组中查找对应学号和科目
    for(i=0;i<4;i++){
        if(number==students[i].number){
            stu_chan=&students[i];
            break;
        }
        
    }
    //输入学号不存在情况
    if(i>=4){
        printf("Error:student number not exists.");
        system("pause");
        return 0;
    }
    //确认要修改的科目
    if(strcmp(subject,"english")==0){
        printf("Enter new english grades:\n");
        scanf("%d",&(*(stu_chan)).english);
         printf("After changeing:\n");
        printf("num:%d,english:%d",(*(stu_chan)).number,(*(stu_chan)).english);

    }else if(strcmp(subject,"math")==0){
        printf("Enter new math grades:\n");
        scanf("%d",&(*(stu_chan)).math);
        printf("After changeing:\n");
        printf("num:%d,math:%d",(*(stu_chan)).number,(*(stu_chan)).math);
    }else if(strcmp(subject,"computer")==0){
        printf("Enter new computer grades:\n");
        scanf("%d",&(*(stu_chan)).computer);
        printf("After changeing:\n");
        printf("num:%d,computer:%d",(*(stu_chan)).number,(*(stu_chan)).computer);
    }
    system("pause");
    return 0;


}