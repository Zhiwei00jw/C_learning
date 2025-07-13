/*输出所有大于平均值的数*/
#include <stdio.h>

int main() {
	int i, n;
	double sum=0.0,average;
	int a[10];

	printf("Enter n");/*提示输入输入数组的个数*/
	scanf("%d",&n);
	if(n>=1&&n<=10){
		printf("Enter %d integers",n);
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		average=sum/n;
		printf("average=%.2f\n",average);
		printf("> average:");
		for(i=0;i<n;i++){
			if(a[i]>average)
			printf("%d",a[i]);
		}
	}else{
		printf("Invalid value");
	}
	system("pause");  // 会显示 "Press any key to continue..."
	return 0;
}
