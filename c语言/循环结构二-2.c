#include <stdio.h>
#include <math.h>
int main() {
	int x=0,a,y=0,n=0,hundred,ten,single;
	printf("请输入若干个三位数字（务必输入0结束输入！）:");
	while(x==0){
		scanf("%d",&a);
		if(a==0){
			x=1;
			continue;
		}
		if(a<100||a>=1000){
			printf("请输入三位数字！！！\n");
			y=1;
			break;
		}
		hundred=a/100;
		ten=(a/10)%10;
		single=a%10;
		if(hundred*hundred*hundred+ten*ten*ten+single*single*single==a){
			printf("%d\t",a);
			n++;
			if(n%3==0)
			printf("\n");}
	}
	if(y==0)
	printf("\n水仙花数的个数为%d",n);
	return 0;
}
