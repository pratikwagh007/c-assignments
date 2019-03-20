#include<stdio.h>

int main(){
	int n,a,total=0,per;
        printf("Enter number of subjects");
	scanf("%d",&n);

        printf("Enter marks in %d subjects:",n);

	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		total=total+a;
	}

	per = total/n;


	if(per>=75)
		printf("Grade = A");
	else if(per>=60 && per<75)
		printf("Grade = B");
	else if(per>=35 && per<60)
		printf("Grade = C");
	else
		printf("Grade = Fail");
}






