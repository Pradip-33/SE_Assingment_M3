/*Write a C program to accept two integers and check whether they are equal
or not*/
#include<stdio.h>
int main()
{
	int n,n1;
	
	printf("\n\n\t Enter a number to check : ");
	scanf("%d",&n);
	printf("\n\n\t Enter a number to check : ");
	scanf("%d",&n1);
	if(n==n1) 
		printf("\n\n\t Equal");
	
	else
		printf("\n\n\t Not Equal");
	

}