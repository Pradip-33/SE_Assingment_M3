#include<stdio.h>

void print_reverse(char *s);

int main()
{
	char s[50];
	printf(" write any line for reverse : ");
	scanf("%s",&s[50]);
	print_reverse(s);
	printf("\n");
}
void print_reverse(char *s)
{
	if(*s != '\0')
	{
	print_reverse(s + 1);
	printf("%c",*s);
	}
	printf("\n");		
}

