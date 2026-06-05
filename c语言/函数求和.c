#include <stdio.h>
int arraysum(int x){
	static int sum=0;//静态变量，仅初始化一次
	sum+=x;//累加x
	return sum;//返回当前和
}
int main() {
	int total;
	int arr[]={1,4,2,8,5,7};
	for(int i=0;i<6;i++){   //遍历数组
	total=arraysum(arr[i]);//逐个传入元素相加
	}
	printf("总和:%d",total);//输入最终和
	return 0;
}
