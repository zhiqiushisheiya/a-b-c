#include <stdio.h>

int main() {
	 int x;
	  printf("输入分数(百分制）：");
	 scanf("%d",&x);
	 if(x<0||x>100){printf("输入的分数有误！");
	 return 1;
	  }
	  int grade = x/10;
	  switch(grade){
case 10: case 9: printf("A"); break;
case 8: printf("B");break;
case 7: printf("C");break;
case 6: printf("D");break;
default: printf("E");break;
	  }	
	  	 	return 0;
}
