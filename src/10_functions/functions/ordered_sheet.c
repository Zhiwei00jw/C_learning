#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//定义数组最大值
#define MAX 20 
//不使用全局变量count；int count=0;
// 函数声明
int input_array(int *a);
void select(int *a,int operation,int value,int *count);
void insert(int *a,int value,int *count);
void remove_value(int *a,int value,int  *count);
int query(int *a,int value,int *count);
void print_array(int *a,int num);
int main() {
    int a[MAX];
    int count;
    int operation,value;
    //先输入待操作的有序数组
    count=input_array(a); 
    //在桌面显示操作菜单
    printf("[1] Insert\n");
    printf("[2] Delete\n");
    printf("[3] Query\n");
    printf("[Other option] End\n");
    printf("Enter option number:\n");
    scanf("%d",&operation);
    printf("Enter value:\n");
    scanf("%d",&value);
    select(a,operation,value,&count);
    system("pause");
    return 0;
}

// 函数定义
int input_array(int *a) {
    int i=0;
    int count=0;
    int min,j,index,delete=0,temp;
    int *p_array1=&a[0],*p_array2=p_array1+1;
    //输入数组中数据个数，修改全局变量count以便于各个函数共用
    printf("Enter count:\n");
    scanf("%d",&count);
    printf("Enter %d number in order:\n",count);
    //逐个输入数组中的数据
    for(i=0;i<count;i++){
        scanf("%d",&a[i]);
    }    
    printf("Function input_array is called.\n");
    //当输入的是无序或有重复数字数组时，进行排序并删除重复数字
    //选择排序法
    min=a[0];
    for(j=0;j<count;j++){
        for(i=j;i<count;i++){
            if(min>=a[i]){
                min=a[i];
                index=i;
            }
        }
        //将数组中的最小数挪动到最前面位置，然后从数组的第二个数开始继续寻找最小值，以此类推
        temp=a[index];
        a[index]=a[j];
        a[j]=temp;
        min=a[j+1];
    }
    /*
    //排好序的数组删除重复数字，遍历数组，发现重复数字时就向前挪动一位，移动效率低
    i=1;
    while(i<count-delete){
        if(a[i]==a[i-1]){
            j=i;
            delete++;
            while(j<count-1){
                a[j]=a[j+1];
                j++;
            }           
        }else{
            i++;
        }
    }
    */
   //使用双指针删除重复元素
   index=0;
   while(index<count-1){    //count-1是指针2移动次数
        if(*p_array1==*p_array2){
            p_array2++;
            index++;
            delete++;
        }else{
            p_array1++;
            *(p_array1)=*p_array2;
            p_array2++;
            index++;
        }
   }

    print_array(a,count-delete);
    return count-delete;
}
void select(int *a,int operation,int value,int *count){
    switch (operation)
    {
    case 1:
        insert(a,value,count);
        break;
    case 2:
        remove_value(a,value,count);
        break;
    case 3:
        query(a,value,count);
        break;
    
    default:
        break;
    }

}
void insert(int *a,int value,int *count){
    int i=0,j=0,index=1;
    //从a[i]开始逐个往后移一位
    for(i=0;i<*count;i++){
        if(value<=a[i]){
            if(value<a[i]){
                index=0;
                for(j=*count;j>i;j--){
                    a[j]=a[j-1];
                }
                a[j]=value;
            
            }else{  //重复数字不插入
                printf("Repeated number.\n");
            }

            break;
        }
    }
    //插入后数组的值加一
    if(index==0){
        (*count)++;
    }
    //value值大于数组中所有数字，则插入到最后
    if(i>=*count){
        a[*count]=value;
        (*count)++;

    }
    print_array(a,*count);

}
void remove_value(int *a,int value,int *count){
    //调用查找函数直接返回待查找值的位置
    int index=query(a,value,count);
    //没找到，直接打印原数组
    if(index==-1){
        print_array(a,*count);
    }else{          //找到了，从a[i]开始逐个往前移一位
        int i;
        for(i=index;i<*count-1;i++){
            a[i]=a[i+1];
        }
        (*count)--;
        print_array(a,*count);   
    }
}
int query(int *a,int value,int *count){
    int low=0;
    int high=*count-1;
    int mid,index=0;
    //二分查找法
    //循环判断是否存在待查找数，退出条件是low>high
    while(low<=high){
        mid=(low+high)/2;
        if(value==a[mid]){
            index=1;
            break;
        }else if (value<a[mid])
        {
            high=mid-1;
        }else
        {
            low=mid+1;
        }
       // printf("low=%d,high=%d,mid=%d\n",low,high,mid);
        
    }
    if(index==0){
        printf("Not found.\n");
        return -1;
    }else{
        printf("Found.\n");
        return mid;
    }
}
void print_array(int *a,int num){
    int i=0;
    for(i=0;i<num;i++){
        printf("a[%d]=%d ",i,a[i]);
    }
    printf("\n");
}