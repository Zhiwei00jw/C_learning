/*选择法排序：
1.在未排序的n个数中找到最小值，将它与a[0]交换；
2.在剩下未排序的n个数中找到最小值，将它与a[1]交换；
...
*/
#include <stdio.h>
#define MAXN 10
int main(){
    int n=0;
    int a[MAXN]={0};
    int index=0,j=0,k=0,i=0,temp=0;
    int min=0;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter %d integers:",n);
    for(k=0;k<n;k++){

        scanf("%d",&a[k]);
    }
    min=a[0];
    for(j=0;j<n;j++){
        for(i=j;i<n;i++){
            if(min>=a[i]){
                min=a[i];
                index=i;
            }
        }
        temp=a[index];
        a[index]=a[j];
        a[j]=temp;
        min=a[j+1];

    }
    for(k=0;k<n;k++){
        printf("a[%d]=%d\n",k,a[k]);
    }
    system("pause");
    return 0;
}