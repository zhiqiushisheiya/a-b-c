#include <stdio.h>
int main() {
	int x;double y,n=0,sum=0 ;double a,b,max,min,average;double N=0;
	printf(" 请选择功能\n0代表求总和;\n1代表求平均值;\n2代表求最大值;\n3代表求最小值;\n请输入选择的功能：");
	scanf("%d",&x);
	switch(x){
		case 0 : printf("输入你的数据(务必输入-1结束！)：");
		scanf("%lf",&y);
			while(y!=-1){
				sum+=y;
				scanf("%lf",&y);
			        	}
		printf("%lf",sum);break;
		case 1 : printf("输入你的数据(务必输入-1结束！)：");
		scanf("%lf",&y);
            while(y!=-1){
                N+=y;	
				n++;
				scanf("%lf",&y);	    
                         }
        average=(N/n);
		printf("%lf",average);break;
		case 2 : printf("输入你的数据(务必输入-1结束！)：");
		scanf("%lf",&max);
		scanf("%lf",&a);
             while(a!=-1){
			   	if(a>=x) max=a;
             	scanf("%lf",&a);
			             }	
		printf("%lf",max);break;
		case 3 : printf("输入你的数据(务必输入-1结束！)：");
		scanf("%lf",&min);
		scanf("%lf",&b);
			 while(b!=-1){
			 	if(b<=min) min=b;
			 	scanf("%lf",&b);
			             }
		printf("%lf",min);break;        
		default : printf("请选择已有的功能！");
             	}	   
    	return 0;
}
