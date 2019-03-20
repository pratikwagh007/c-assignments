#include<stdio.h>
#include<string.h>
#include<math.h>

int dtoh(int);
int htod(char []);
int dtob(int);
int dtoo(int);
int btod(int);
int otod(int);
int otob(int);
int btoo(int);
int btoh(int);
int htob(char []);
int otoh(int);
int htoo(char []);

int main(){
	int num,type,x;
	char hex[50]={'0'};

	printf("Enter type of number conversion: 1.decimal to binary\n2.decimal to octal\n3.binary to decimal\n4.octal to decimal\n5.octal to binary \n6.binary to octal\n7.decimal to hexadecimal\n8.hexadecimal to decimal\n9.binary to hexadecimal\n10.hexadecimal to binary\n11.octal to hexadecimal\n12.hexadecimal to octal\n");
	scanf("%d",&type);

	switch(type)
	{
		case 1:
			printf("Enter the required number:");            //decimal to binary
			scanf("%d",&num);
			dtob(num);
			break;

		case 2:
			printf("Enter the required number:");            //decimal to octal
			scanf("%d",&num);
			dtoo(num);
			break;

		case 3:
			printf("Enter the required number:");            //binary to decimal
			scanf("%d",&num);
			x=btod(num);
		        printf("Number in decimal is: %d",x);
			break;

		case 4:
			printf("Enter the required number:");            //octal to decimal
			scanf("%d",&num);
			x=otod(num);
			printf("Number in decimal is: %d",x);
			break;

	        case 5:
			printf("Enter the required number:");            //octal to binary
			scanf("%d",&num);
			otob(num);
			break;

		case 6:
			printf("Enter the required number:");            //binary to octal
			scanf("%d",&num);
			btoo(num);
			break;

                case 7:
                        printf("Enter the required number:");            //decimal to hexadecimal
                        scanf("%d",&num);
			printf("Number in hexadecimal is:");
                        dtoh(num);
                        break;

                case 8:
                        printf("Enter the number in hex: ");             //hexadecimal to decimal
          	        scanf("%s",hex);
                        printf("\nThe number in decimal is:");
        	        htod(hex);
                        break;

                case 9:
                        printf("Enter the required number:");            //binary to hexadecimal
                        scanf("%d",&num);
                        printf("Number in hexadecimal is:");
			btoh(num);
                        break;

                case 10:
                        printf("Enter the required number:");            //hexadecimal to binary
                        scanf("%s",hex);
                        htob(hex);
                        break;

                case 11:
                        printf("Enter the required number:");            //octal to hexadecimal
                        scanf("%d",&num);
			printf("Number in hexadecimal is:");
                        otoh(num);
                        break;

                case 12:
                        printf("Enter the required number:");            //hexadecimal to octal
                        scanf("%s",hex);
                        htoo(hex);
                        break;

		default:
			printf("Invalid choice");
	}
}

int dtob(int num){

	int i=0,rem,j;
	int arr[50];

	while(num>0){                    //decimal to binary
		rem=num%2;
		arr[i]=rem;
		i++;
		num=num/2;
	}

	printf("Number in binary is:");
	for(j=(i-1);j>=0;j--){
		printf("%d",arr[j]);
	}
}

int dtoo(int num){

	int i=0,rem,j;
	int arr[50];

	while(num>0){                    //decimal to octal
		rem=num%8;
		arr[i]=rem;
		i++;
		num=num/8;
	}

	printf("Number in octal is:");
	for(j=(i-1);j>=0;j--){
		printf("%d",arr[j]);
	}
}

int btod(int num){

	int i=0,sum=0,d;                    //binary to decimal

	for(i=0;i<10;i++)
	{
		d=num%10;
		num=num/10;

		if(d!=0)
			sum=sum+pow(2,i);

		if(num==0)
			break;
	}

	return sum;
}

int otod(int num){

	int i=0,sum=0,d;                    //octal to decimal

	for(i=0;i<10;i++)
	{
		d=num%10;
		num=num/10;

		if(d!=0)
			sum=sum+d*pow(8,i);

		if(num==0)
			break;
	}

	return sum;
}

int otob(int num){

 	int x;                               //octal to binary
	x=otod(num);
	dtob(x);
}

int btoo(int num){
                                             //binary to octal
	int x;
	x=btod(num);
	dtoo(x);
}

int dtoh(int num){

	int i=0,rem,j,z;
	int arr[50];

	while(num>0){                    //decimal to hexadecimal
		rem=num%16;
		arr[i]=rem;
		i++;
		num=num/16;
	}

	for(j=(i-1);j>=0;j--){

		if(arr[j]<10)
		printf("%d",arr[j]);
		else{
			
			if(arr[j]==10)
				printf("A");
			if(arr[j]==11)
				printf("B");
			if(arr[j]==12)
				printf("C");
			if(arr[j]==13)
				printf("D");
			if(arr[j]==14)
				printf("E");
			if(arr[j]==15)
				printf("F");
		}
	}
}

int htod(char hex[])                                          //hex to decimal
{
	int len,i,sum=0;
	int arr[50]={0};

	len=strlen(hex);

	for(i=0;i<len;i++)
	{
		arr[len-i-1]=hex[i];
		if(hex[i]>=65)
		{
			arr[len-i-1]=arr[len-i-1]-55;           //a=10 b=11 and so on
		}
	}

	for(i=0;i<len;i++)
	{
		sum = sum + arr[i]*pow(16,i);
	}

	printf("%d",sum);
	return sum;
}

int btoh(int num)
{
	                                                          //binary to hexadecimal
	int x;
	
	x=btod(num);
	dtoh(x);
}

int htob(char hex[])
{                                                                 //hexadecimal to binary
	int x;

	x=htod(hex);
	dtob(x);
}

int otoh(int num)
{                                                                 //octal to hexadecimal
	int x;
	
	x=otod(num);
	dtoh(x);
}

int htoo(char hex[])
{                                                                 //hexadecimal to octal
	int x;
	
	x=htod(hex);
	dtoo(x);
}
