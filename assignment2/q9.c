#include<stdio.h>

int main(){
	int num,sum=0,x;
	printf("Enter number:");
	scanf("%d",&num);

	x=num;

	while(num>0){
		sum = sum + (num%10);
		num = num/10;
	}
	printf("intial sum = %d",sum);

	while(sum>10){
		num = sum;
		sum = 0;
		while(num>0){
			
			sum = sum + (num%10);
			num = num/10;
		}
	}

	printf("Sum of digits is %d",sum);
}

