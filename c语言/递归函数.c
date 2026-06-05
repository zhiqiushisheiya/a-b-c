#include <stdio.h>
int recursion(int arr[],int n,int len){
 	if(n==len) return 0;//递归终止条件：已经遍历所有元素
	return arr[n]+recursion(arr,n+1,len);//递归求和
}
int main() {
	int arr[]={1,4,2,8,5,7,9};
	int total=recursion(arr,0,7);//计算总和
	printf("递归求和：%d",total);
	return 0;
}
