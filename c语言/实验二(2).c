#include <stdio.h>
int main() {
	int a[10]={2,4,6,8,0,1,3,5,7,9};int x,y,m,n,temp,k;int z=1;
	for(m=0;m<9;m++)	
	for(n=m+1;n<10;n++)
	if(a[m]>a[n]){
	temp =a[m];
	a[m]=a[n];
	a[n]=temp;}
	printf("数组的重新排序为：");
	for(k=0;k<10;k++)
	printf("%d ",a[k]);
	printf("\n");
	while(1){
	printf("请输入你要查找的数值:");
	scanf("%d",&x);
	for(y=0;y<10;y++){
	if(a[y]==x){
	z=0;
	break;
	}
	else z=1;}
	if(z==0)
	printf("该数值位于a[%d]\n",y);
	if(z==1)
	printf("未查找到该数据！\n");}
	return 0;
}
