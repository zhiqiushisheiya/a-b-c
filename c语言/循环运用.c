#include <stdio.h>
#include <math.h>
int main() {
	int n;int m=0;
	for(n=100;n<=200;n++){
	    int f =1;
		int k=2;
	while(f&&k<=sqrt(n)){
    if(n%k==0){
 	    f=0;
	break;
	}
	    k++;
	}
	if(f){
	    printf("%d\t",n);
	    ++m;
	if(m%5==0)
  	    printf("\n");
	}
	}
	return 0;
}
