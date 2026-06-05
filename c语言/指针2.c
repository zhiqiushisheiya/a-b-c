#include <stdio.h>
in+ main() {
	int a[5],count=0,i;
	int *pa=a;//定义指针pa指向数组a的首元素
	printf("请输入5个整形数字（用空格分隔）:");
	for(i=0;i<5;i++){  //循环输入5个整数存入数组a
		scanf("%d",&a[i]);
		getchar();//吸收输入的空格
	}
	for(i=0;i<5;i++){  //遍历数组，统计大于0的元素个数
		if(*(pa+i)>0){
			count++;
		}	
	}
	printf("该整形数组中大于0的元素个数:%d\n",count);
	char c[10];
	char *pc=c;//定义指针pc指向数组c的首元素
	int k=0;
	printf("请输入若干个字符，总个数不超过9（用空格分隔）:");
    for(i=0;i<10;i++){   //循环输入若干个字符存入数组c
		scanf("%c",&c[i]);
		k++;
		if(c[i]=='\n'){  //若读取到换行符，则输入结束
			break;
		}
		getchar();//吸收输入的空格
    }
	for(i=0;i<k;i++){  //遍历数组，进行大小写转换
		if(*(pc+i)>='a'&&*(pc+i)<='z'){  //判断是否为小写字母
			*(pc+i)-=32;//转为大写
		}else if(*(pc+i)>='A'&&*(pc+i)<='Z'){  //判断是否为小写字母
			*(pc+i)+=32;//转为小写
		}
	}
	printf("大小写转换后:");
	for(i=0;i<k;i++){  //循环输出转换后的字符
		printf("%c ",*(pc+i));
	}	
	return 0;
}
