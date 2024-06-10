#include<stdio.h>
int main()
{
	int x[5],i,n,f=1;
	printf("\n::::::::::::::::::::::::::::::::::::::::::::");
	for(i=0;i<5;i++)
    {
		printf("\n\t Enter a number to find Factorial: ");
		scanf("%d",&x[i]);
	}

	printf("\n::::::::::::::::::::::::::::::::::::::::::::");
	for(i=0;i<5;i++)
    {
		f=1;
			for(n=1;n<=x[i];n++)
				{
					f=(f*n);
				}
			printf("\n\n\t  Factorial is %d",f);
	}

	printf("\n::::::::::::::::::::::::::::::::::::::::::::");
}