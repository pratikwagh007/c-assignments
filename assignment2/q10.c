#include<stdio.h>
int main()
{       
       int n,i,j=3,count=1;
       printf("Enter the number of prime numbers:"); 
       scanf("%d",&n);

       printf("List of prime numbers is: 2");

       if(n>1)
       {
	       while(count<n)
	       {
		       for(i=2;i<j;i++)
		       {
			       if(j%i==0)
				       break;
		       }

		       if(i==j)
		       {
			       printf(" %d",i);
			       count++;
		       }

		       j++;
	       }
       }
}

