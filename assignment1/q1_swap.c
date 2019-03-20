#include<stdio.h>

int main(){
	int x=10,y=20;
	x= x+y;
	y= x-y;
	x= x-y;
	printf("x=%d,y=%d",x,y);
	return 0;
}
