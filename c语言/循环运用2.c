#include <stdio.h>

int main() {
	int a,b;
	for(a=0;a<5;a++){
		for(b=0;b<4-a;b++)
		    printf(" ");
		for(b=0;b<2*a+3;b++)
		    printf("*");
		for(b=0;b<8-2*a;b++)
		    printf(" ");
		for(b=0;b<2*a+3;b++)
		    printf("*");
  		    printf("\n");
	}
	for(a=0;a<11;a++){
		for(b=0;b<a;b++)
		    printf(" ");
		for(b=0;b<22-2*a;b++)
		   printf("*");
		for(b=0;b<a;b++)
			printf(" ");
			printf("\n");
	}
	return 0;
}
