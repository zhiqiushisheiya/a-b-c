#include <stdio.h>
int main() {
	int a,b;double c;
	while(1){
	    printf("是否学生（输入0表示否，输入1表示是）：");
	scanf("%d",&a);
	    printf ("输入行李重量（单位为千克）：");
	scanf("%d",&b);
		switch(a){
			
		case 0 :
		if(b<=50) {
	     c=b*0.3;
		    printf("您的费用为%lf\n\n",c);}
		else { if(b>50&&b<=100){
		        c=0.3*50+(b-50)*0.2;
	 	    printf("您的费用为%lf\n\n",c);}
		else{   c=0.3*50+50*0.2+(b-100)*0.15;                   
		    printf("您的费用为%lf\n\n",c);
			}
		}
			break;
		case 1:if(b<=50) {
	            c=b*0.3;
			printf("您的费用为%lf\n\n",c);}
		else { if(b>50&&b<=100){
				c=0.3*50+(b-50)*0.2;
			printf("您的费用为%lf\n\n",c);}
		else {c=0.3*50+50*0.2+(b-100)*0.08;
			printf("您的费用为%lf\n\n",c);
			}
		}
			break;
		default : 
			printf("请选择正确的选项！\n\n");	
		}
	           
   	}
	return 0;
}
