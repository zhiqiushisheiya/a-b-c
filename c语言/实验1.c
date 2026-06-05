#include <stdio.h>
int main() {
	double a,b,c;
	while(1){
	printf("请输入三角形的三边长（以空格隔开）:");
    scanf("%lf %lf %lf",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a){
		if(a==b&&b==c){
			printf("该三角形是等边三角形\n");
				}
				else if(a==b||a==c||b==c){
					printf("该三角形是等腰三角形\n");
				}
				else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
					printf("该三角形是直角三角形\n");
				}
				else {
					printf("该三角形是普通三角形\n");
				}
	                       }
		        else{
					printf("不能构成三角形\n");
				}	
					}
	return 0;
}

	
