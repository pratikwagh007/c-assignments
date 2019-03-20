#include<stdio.h>


int main(){
	int x= 23, y=56, z= 39;
	if(x>y && x>z)
		printf("x is the greatest");
	else if(y>x && y>z)
		printf(" y is the greatest");
	else
		printf("z is the greatest");
return 0;
}

