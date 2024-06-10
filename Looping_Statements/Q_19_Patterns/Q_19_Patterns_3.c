// Patterns: 3
#include<stdio.h>
int main()
{
	int R,C;
	
	
	R=1;
	while(R<=5)
	{
	
		C=1;
		char i='A';
		while(C<=R)
		{
				
			printf("%c ",i);
			C++;
			i++;
			
			
		}
		printf("\n");
		R++;
	
	}
}