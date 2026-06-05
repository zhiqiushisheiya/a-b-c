#include <stdio.h>

int main() {
	int n ,hundred ,ten ,unit, N;
	printf("请输入一个三位数自然数:");
	scanf("%d",&n);
	hundred=n/100 , ten=(n/10)%10 ,unit=n%10;
	N=unit*100+ten*10+hundred*1;
	printf("输出数据: %d",N);
	return 0;
}
