#include<stdio.h>

int main(){
	int x=10,z;

	z=x++;
	printf("z=%d\n",z);
       	z=++x;
	printf("z=%d\n",z);
       	z=x++*10;
	printf("z=%d\n",z);
       	z=++x*10;
	printf("z=%d\n",z);
	z=x--/3;
	printf("z=%d\n",z);
       	z=--x/3;
	printf("z=%d\n",z);
	
}

