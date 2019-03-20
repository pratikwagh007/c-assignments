#include<stdio.h>

int main(){
	int x,y,z;

	printf("Enter three numbers:");
	scanf("%d %d %d",&x,&y,&z);

	(x>y && x>z)?printf("x=%d is the largest",x):((y>x && y>z)?printf("y=%d is the largest",y):printf("z=%d is the largest",z));
}
