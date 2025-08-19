//生成结构数组，对学生程序排序
#include <stdio.h>
#include <string.h>
#define MAX 50
struct stu_inf{
    int number;
    char name[10];
    int computer,english,math;
    double average;
};
void selection_sort(int n,struct stu_inf *array);
int main(){
    int n;
    struct stu_inf stu[MAX];
    int i;
    //输入学生数量
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter %d students' number,name and courses' scores:\n",n);
    //输入学生信息；
    for(i=0;i<n;i++){
        printf("No.%d:",i+1);
        scanf("%d%s%d%d%d",&stu[i].number,stu[i].name,&stu[i].computer,&stu[i].english,&stu[i].math);
        stu[i].average=(stu[i].computer+stu[i].english+stu[i].math)/3.0;
    }
    //使用选择排序法将学生信息按照平均分数从小到大进行排序
    selection_sort(n,stu);
    //按照从大到小输出学生信息
    for(i=n-1;i>=0;i--){
        printf("num:%d,name:%s,average:%.2lf\n",stu[i].number,stu[i].name,stu[i].average);
    }
    system("pause");
    return 0;

}
void selection_sort(int n,struct stu_inf *array){
    int index=0,j=0,i=0;
    struct stu_inf temp;
    double min=0.0;
    min=array[0].average;
    for(j=0;j<n;j++){
        for(i=j;i<n;i++){
            if(min>=array[i].average){
                min=array[i].average;
                index=i;
            }
        }
        temp=array[index];
        array[index]=array[j];
        array[j]=temp;
        min=array[j+1].average;

    }   
}