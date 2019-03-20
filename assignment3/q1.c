#include<stdio.h>

int main(){
	int i,j,n,k;
	int arr[50]={1};
	int p[50]={0};
	int a[50]={0};

	printf("Enter n:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{       
	        for(int l=n;l>i+1;l--)
		{
			printf(" ");
		}

		arr[0]=1;
		printf("%d ",arr[0]);
		if(i==0) printf("\n");
		p[0]=1;
		a[0]=1;

		for(j=1;j<i+1;j++)
		{
			if(i==j)                                        //last element print
			{
				arr[j]=1;
				p[j]=arr[j];
				printf("%d\n",arr[j]);
				a[j]=arr[j];
			}
			else
			{
				arr[j]=p[j]+a[j-1];
				printf("%d ",arr[j]);
				p[j]=arr[j];
			}
		}

		for(k=0;k<=(i-1);k++)
		{
			a[k]=p[k];
		}
	}

}
