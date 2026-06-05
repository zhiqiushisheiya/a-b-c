#include <stdio.h>
extern int choice;
int function() {
	int a[50],x,y,k,sum,n=0;double average;int choice;
	printf("请选择你需要的功能（输入0为求和，1为求平均值，2为数据排列后输出）：");
	scanf("%d",&choice);
	printf("请输入若干数据（数据不多于50个，相邻数据用空格隔开,输入完后按0结束）：");
	for(x=0;x<50;x++){
	    scanf("%d",&a[x]);
	    n++;
	    if(a[x]==0)
		break;    
    }
	switch(choice){
		case 0 :{
			for(sum=0,x=0;x<n-1;x++)
			sum+=a[x];
			printf("该组数据的总和为：%d\n",sum);
			break;
	    }
		case 1 :{
		    for(sum=0,x=0;x<n-1;x++)
	 	    sum+=a[x];
		    average=sum/10.0;
			printf("该组数据的平均值为：%lf\n",average);
			break;
	    }	
		case 2 :{
			for(x=0;x<(n-2);x++)
			for(y=x+1;y<(n-1);y++)
		 	if(a[x]>a[y]){
			    int temp = a[y];
				a[y]=a[x]; a[x]=temp;
		    }
		    printf("数据的重新排列为：\n");
			for(k=0;k<n-1;k++)
		  	printf("%d ",a[k]);
		  	printf("\n");
			break;		
		}	
		default : printf("请选择已有的功能选项！\n");
    }
return 0;
}
