//WAP to check whether a number is negative, positive or zero
#include<stdio.h>
int main()
{
	int n;
	
	printf("\n\n\t Enter a number to check : ");
	scanf("%d",&n);
	
	if(n>0 && n<999999)
	{
		printf("\n\n\t Number is positive...");
	}
	else if(n<0)
    {
        printf("\n\n\t Number is Negative...");
    }
    else if(n==0)
    {
        printf("\n\n\t Number is 0");
    }
    else
    {
        printf("\n\n\t Invalid num or character");
    }
	
}