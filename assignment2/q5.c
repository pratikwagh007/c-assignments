#include<stdio.h>

int main(){
	int num,i;
	printf("Enter number:");
	scanf("%d",&num);

	if(num==1 || num==2)
		printf("Given number is neither prime nor composite");

	for(i=2;i<num;i++){
		if(num%i == 0)
			break;
	}

	if((num!=1) && (num!=2)){
		
		if(i<num)
			printf("Number is not prime");
		else
			printf("Number is prime");
		}
}


