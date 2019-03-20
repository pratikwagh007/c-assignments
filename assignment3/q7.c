#include<stdio.h>

int main(){
	int a,b,c,d;
	a=10;b=20;c=30;

	d=++a,++b,++c,a+5;
	printf("%d",d);

        d=(++a,++b,++c,a+5);
	printf("%d",d);
}
