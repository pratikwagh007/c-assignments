#include<stdio.h>
int main()
{
	int n1,n2,i,x,gcd,lcm;
	printf("Enter two numbers\n");
	scanf("%d%d",&n1,&n2);

	if (n1>n2)
		x=n2;
	else
		x=n1;

	for(i=1;i<x;i++)
	{
		if(n1%i==0 && n2%i==0)
			gcd=i;
	}
         
	if(n1==n2)
		gcd=n1;

	printf("GCD of %d and %d is=%d\n",n1,n2,gcd);

	lcm=(n1*n2)/gcd;

	printf("LCM of %d and %d is=%d\n",n1,n2,lcm);

}

