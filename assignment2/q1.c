#include<stdio.h>

void add(float,float);
void sub(float,float);
void mul(float,float);
void div(float,float);

int main(){
	float a,b;
	int sw;
	printf("Enter two numbers");
	scanf("%f %f",&a,&b);

	printf("Enter your choice:\n1.add\n2.sub\n3.mul\n4.div\n");
	scanf("%d",&sw);

	switch(sw)
	{
		case 1:
			add(a,b);
			break;
		case 2:
			sub(a,b);
			break;
		case 3:
			mul(a,b);
                        break;
		case 4:
			div(a,b);
			break;
		default:
			printf("Invalid choice");
			break;
	}
}

void add(float x, float y){
	float z=0;
	z=x+y;
	printf("Sum is %f",z);
}

void sub(float x, float y){
	float z=0;
	z=x-y;
	printf("Subtraction is %f",z);
}

void mul(float x, float y){
	float z=0;
	z=x*y;
	printf("Product is %f",z);
}

void div(float x, float y){

	float z=0;
	
	if(y!=0)
	{
		z=x/y;
		printf("Quotient is %f",z);
	}
	else
		printf("Division by 0 is not valid");
}

			
