/*使用顺序查找法逐个查找数组中是否有相应元素，并输出相应下标的最大值和最小值*/
#include <stdio.h>
#define MAXNLINE 80
int main(){
    char s[MAXNLINE];
    int b[MAXNLINE];
    char x;
    int num=0;
    int i=0,j=0,k=0;
    int maxm=0,min=0;
    //输入待查找的字符和字符串
    printf("Enter a character x:");
    x=getchar();
    while (getchar() != '\n')  // 使getchar函数读取完缓冲区的'\n'
        printf("\n");

    printf("Enter a string:");
    while((s[k]=getchar())!='\n'){
        k++;
    }
    s[k]='\0';    
    //将所有符合条件的下标都储存到b[]中
    for(i=0;i<k;i++){
        if(s[i]==x){
            num++;
            b[j]=i;
            j++;
        }

    }//判断数组中是否有数与x相同
    if(num==0){
        printf("NOT FOUND");   
    }else{
        //遍历求得下标的最大值和最小值
        for(j=0;j<num;j++){
            printf("b[%d]=%d\n",j,b[j]);
            if(maxm<b[j])
                maxm=b[j];
            if(min>b[j])
                min=b[j];
        }
        printf("the maxm index is %d\n",maxm);
        printf("the minest index is %d\n",min);
       

    }
    
    system("pause"); 
    return 0;
}

