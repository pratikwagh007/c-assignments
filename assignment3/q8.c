#include<stdio.h>

float sum(int[], int);
void avg(float,int);
void min(int[],int);
void max(int[],int);

int main(){
	int n,arr[50]={0},i;
	float x;
	printf("Enter the no. of elements");
	scanf("%d",&n);

	printf("enter the numbers \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	x=sum(arr,n);
	avg(x,n);
	min(arr,n);
	max(arr,n);

}

float sum(int arr[],int n)
{
	int i;
	float add=0;

	for(i=0;i<n;i++)
	{
		add=add+arr[i];
	}
	printf("Sum of the numbers is=%f",add);
	return add;

}

void avg(float x, int n)
{
	float Avg=0;
	Avg=x/n;
	printf("Avg of the numbers is=%f",Avg);
}

void min(int arr[],int n)
{
	int m=arr[0];

	for(int i=1;i<n;i++)
	{
		if(m<arr[i])
		{
		}
		else
			m=arr[i];
	}
	
	printf("The minimum number is=%d",m);
}
void max(int arr[],int n)
{
	int m=arr[0];

	for(int i=1;i<n;i++)
	{
		if(m<arr[i])
	
			m=arr[i];
	
	}
	
	printf("The maximum number is=%d",m);
}








