#include <stdio.h>
int main() {
	int a[5],b[3][3];int x,y;
	printf("请先输入一维数组的各数据(务必一共输入5个;各数据用空格隔开）：");
	for(x=0;x<5;x++)
	scanf("%d",&a[x]);	
	printf("一维数组a[5]的结果；");
	for(x=0;x<5;x++)
		printf("%d ",a[x]);
		printf("\n");
	printf("请再输入二维数组的各数据(务必一共输入9个;各数据用空格隔开）：");
	for(x=0;x<3;x++)
	for(y=0;y<3;y++)
	scanf("%d",&b[x][y]);
	printf("二维数组b[3][3]的结果（以3*3的矩阵形式输出）：\n");
	for(x=0;x<3;x++){
		for(y=0;y<3;y++)
		printf("%d\t",b[x][y]);
		printf("\n");}
	return 0;
}
