#include<stdio.h>


int main(){
	int n, fact=1;
	printf("Enter the number whose factorial you want:");
	scanf("%d",&n);
	if (n==0||n==1)
		printf ("factorial of given number is 1");
	else {
                 for(int i=n;i>0;i--)
		 {	 
			fact=fact*i;
		        }
	    printf("Factorial of the given number is %d",fact);
              }
	return 0;
	}

