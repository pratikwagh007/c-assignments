#include<stdio.h>

int main(){
	int num,i,a,b,c,d,x;
	printf("Enter number:");
	scanf("%d",&num);

	a=num%10;
	b=num/100;
	c=num/10;
	d=c%10;
	x =(a*a*a) + (b*b*b) + (d*d*d);
	printf("a=%d b=%d c=%d d=%d x=%d ",a,b,c,d,x); 

	if(x==num)
		printf("Given number is an amstrong number");
	else
		printf("Given number is not an amstrong number");
}

