#include<stdio.h>
int main()
{
	int x;
	float y;

	printf("Enter the number in int and number in float ");
	scanf("%d %f",&x,&y);

//	printf("%5.2d\n",x);
	printf("%5d\n",x);
	printf("%05d\n",x);
	printf("%-5d",x);
	printf("%8.2f\n",y);
	printf("%.2f",y);
}

