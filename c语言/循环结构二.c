#include <stdio.h>
int main() {
	int b; double sum=0,a;int n=0,x=1;
	printf("请输入你的数据（单个数据间以空格间隔，务必最后输入0结束输入）:");
	while(x!=0){
		scanf("%lf",&a);
	    if(a>0)
			sum+=a;
		if(a==0){
			x=0;
		break;
		}
	}
	printf("你的正数之和为%lf",sum);
	return 0;
}
