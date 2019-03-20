#include<stdio.h>

int main(){

	int dd,mm,yyyy,sum=0,i,day,diff_y,leap=0;
	int arr[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	char week[7][40]={"Thursday","Friday","Saturday","Sunday","Monday","Tuesday","Wednesday"};

	printf("Enter date in dd-mm-yyyy format:");
	scanf("%d-%d-%d",&dd,&mm,&yyyy);

	diff_y=yyyy-1970;
	
	for(i=1;i<mm;i++)
	{
		sum=sum+arr[i];
	}

	for(i=1970;i<yyyy;i++)
	{
		if(i%4==0 || i%400==0)
			leap++;
	}

	sum = sum + dd + diff_y*365 + leap;

	if((dd>28 && mm==2) || (mm>2))
	{
		if(yyyy%4==0 || yyyy%400==0)
	      		sum++;
	}		

	day=sum%7;

	if(day==0) printf("Day is wednesday");
	else
	printf("Day is %s",week[day-1]);
}
