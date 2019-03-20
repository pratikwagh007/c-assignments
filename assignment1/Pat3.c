#include<stdio.h>
int main()
{
	int i,j,k,c=0;

	printf("Enter a number to make its pattern\n");
        scanf("%d",&k);
	for(i=1;i<=k;i++,c++)
	{
		for(j=k+c;j>0;j--)
		{
			if(j<=i)
				printf("%d",i);
			else printf(" ");}
			printf("\n");
	}
	return 0;
}
