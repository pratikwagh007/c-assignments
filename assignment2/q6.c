#include<stdio.h>

int main(){
	int num,x=0,y=1,z=0;
	printf("Enter number of terms of Fibonacci series:");
	scanf("%d",&num);

	printf("Fibonacci series: 0 1");

	for(int i=2;i<num;i++){
		z=x+y;
		printf(" %d",z);
		x=y;
		y=z;
	}
}


