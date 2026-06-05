#include <stdio.h>
int main()
{
	int x=2,y=4,z=7;
	x=y--<=x||x+y!=z||++z;
	printf("x=%d,y=%d,z=%d",x,y,z);
	return 0;
}
