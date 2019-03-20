#include<stdio.h>

void with(int,int);
void without(int,int);
void in_single_line(int,int);

int main(){
	int x,y;

	printf("Enter two numbers:");
	scanf("%d %d",&x,&y);
        
	without(x,y);
	with(x,y);
	in_single_line(x,y);

}

void without(int x,int y){
	
	x= x+y;
	y= x-y;
	x= x-y;
	printf("Without using third variable x=%d,y=%d\n",x,y);
}

void with(int x,int y)
{
	int z;

	z=y;
	y=x;
	x=z;
	printf("With using third variable x=%d,y=%d\n",x,y);
}

void in_single_line(int x,int y)
{

        int z=x^y;

        if(x=x^z)

        if(y=y^z)

        if(printf("Using one line code x=%d,y=%d",x,y))
	{
	}
}


