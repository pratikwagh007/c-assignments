#include<stdio.h>
void time_to_sec(int,int,int);
void sec_to_time(int);

int main(){
	int h,m,s,total,sw;

	printf("Enter conversion type:\n1. time to seconds \n2. seconds to time");
	scanf("%d",&sw);

	switch(sw){
		case 1:
			printf("Enter time in hh mm ss\n");
			scanf("%d %d %d",&h,&m,&s);
			time_to_sec(h,m,s);
			break;
		
		case 2:
			printf("Enter total no. of seconds ");
			scanf("%d",&total);
			sec_to_time(total);
			break;

		default:
			printf("Invalid choice");
	}
}
	
void time_to_sec(int h,int m,int s)
{
	int total;

	total=3600*h+60*m+s;
	printf("No. of seconds is %d",total);
}

void sec_to_time(int total)
{
	int h,m,s,x;

	h=total/3600;
	x=total%3600;
	m=x/60;
	s=x%60;

	printf("Time is %d:%d:%d",h,m,s);
}


