#include <stdio.h>
#include <string.h>
int main(){
	char c[10];
	int i;
	printf("请逐个输入9个字符:\n");
	for (i=0;i<9; i++){
	    printf("请输入第%d个字符：",i+1);
	    scanf("%c",&c[i]);
	    getchar();
	}
	printf("字符输出:");
	for (i = 0; c[i] != '\0'; i++) {
		printf("\n%c", c[i]);
	}
	printf("\n字符串输出:%s", c);
	printf("\n从第三个字符开始输出:%s", c + 2);
	
	printf("\n\n请按行输入9个字符:");
	scanf("%9s", c);
	printf("字符输出:");
	for (i = 0; c[i] != '\0'; i++) {
		printf("\n%c", c[i]);
	}
	printf("\n字符串输出:%s", c);
	printf("\n从第三个字符开始输出:%s", c + 2);
	return 0;
}
