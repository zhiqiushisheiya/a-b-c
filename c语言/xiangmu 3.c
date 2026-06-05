#include <stdio.h>
#define g 9.8
int main() {
	float d,v,G;
	scanf("%f,%f",&d,&v);
	G =d*v*g;
	printf("G=%.2f\n",G);
	return 0;
}
