#include<stdio.h>


int main(){

	int year= 2005;
	 if ( year%4==0 || year%400==0)
		 printf( "given year is leap year");
	 else 
		 printf("Given year is not a leap year");
	 return 0;
}


