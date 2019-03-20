#include<stdio.h>

int main(){
	int num,sum=0,i;
        printf("Enter the number:");
        scanf("%d",&num);

        for(i=1;i<=num;i++){
		if(num%i == 0)
			sum = sum+i;
	}

	if((sum/2) == num)
		printf("Given number is a perfect number");
	else
		printf("Given number is not a perfect number");
}

