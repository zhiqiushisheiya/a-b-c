#include <stdio.h>
int main() {
    int a ;double b , sum;
	printf("输入你的初始数据:");
		scanf("%lf",&sum);
	printf("请输入你想要的功能（1为加法，2为减法，3为乘法，4为除法）:");
	    scanf("%d",&a);
	while(1) {
		if(a!=1&&a!=2&&a!=3&&a!=4){
	printf("请选择已有的功能！");break;}
	switch(a){
    case 1 :
    printf("输入你相加的数:");
    	scanf("%lf",&b);
    	    sum+=b;
    printf("您的结果为%lf\n",sum);
	printf("请输入你想要的功能（1为加法，2为减法，3为乘法，4为除法）:"); scanf("%d",&a);break;
    case 2 :
	printf("输入你相减的数:");
	    scanf("%lf",&b);
	    	sum-=b;
	printf("您的结果为%lf\n",sum);
	printf("请输入你想要的功能（1为加法，2为减法，3为乘法，4为除法）:"); scanf("%d",&a);break;
	case 3 :
	printf("输入你相乘的数:");
		scanf("%lf",&b);
			sum*=b*1.0;
	printf("您的结果为%lf\n",sum);
	printf("请输入你想要的功能（1为加法，2为减法，3为乘法，4为除法）:"); scanf("%d",&a);break;	
	case 4 :
	printf("输入你相除的数:");
	    scanf("%lf",&b);
		    sum/=b*1.0;
	printf("您的结果为%lf\n",sum);
	printf("请输入你想要的功能（1为加法，2为减法，3为乘法，4为除法）:"); scanf("%d",&a);break;	 
			  }  }	
	return 0;	}
	
