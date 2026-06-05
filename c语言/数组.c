#include <stdio.h>
int main() {
	int a[10],x,y,k,sum,n;double average;
	printf("请输入数组中的十个整形数据（相邻数据用空格隔开）：");
	for(x=0;x<10;x++)
	scanf("%d",&a[x]);
	while(1){
	printf("请选择你需要的功能（输入0为求和，1为求平均值，2为数组排列后输出）：");
	scanf("%d",&n);
	switch(n){
		case 0 :{
			for(sum=0,x=0;x<10;x++)
			sum+=a[x];
			printf("该数组的总和为：%d\n",sum);
			break;
		}
		case 1 :{
			for(sum=0,x=0;x<10;x++)
			sum+=a[x];
			average=sum/10.0;
			printf("该数组的平均数为：%lf\n",average);
			break;
		}	
		case 2 :{
			    for(x=0;x<9;x++)
			    for(y=x+1;y<10;y++)
		 	    if(a[x]>a[y]){
				    int temp = a[y];
				    a[y]=a[x]; a[x]=temp;
			    }
			    printf("数组的重新排列为：\n");
			    for(k=0;k<10;k++)
		  	    printf("%d ",a[k]);
		  	    printf("\n");
			    break;		
		}	
		default : printf("请选择已有的选项！\n");
	}	}
	return 0;
}
