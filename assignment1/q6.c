#include<stdio.h>

int main(){
	float n,sum=0,i=0,j;
	float avg=0;
	printf("Enter the value of n=");
	scanf("%f",&n);
	for(i=0;i<n;i++)
	{
             scanf("%f",&j);
	     sum=sum+j;
	}

	printf("sum=%f",sum);
	avg= sum/n;
	printf("Average is=%f",avg);
	return 0;
}

