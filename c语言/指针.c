#include <stdio.h>
int main() {
	char ch='X';
	char*p=&ch;//定义指针指向字符变量，获取其地址
	printf("直接访问结果:ch=%c\n",ch);//直接访问结果后输出
	*p='Y';//改变变量值
	printf("间接访问结果:*P=%c\n",*p);//间接访问修改后结果后输入
	return 0;
}
