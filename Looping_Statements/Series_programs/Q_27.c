//Series Program: 27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 ..........n
#include<stdio.h>
int main()
{
int i,j,n;
	printf("\n ⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎");
	printf("\n\n\t  Enter Number for N :");
	scanf("%d",&n);
	printf("\n ⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎\n");	
     for(i=1;i<=n;i++)
          {
               printf(" %d/%d",i,i+1);
                    if((i+1)%2==0)
                         {
                         printf("-");
                         }
                    else if(i==n)
                         {
                              printf(" ");
                         }
          
                    else
                         {
                              printf("+");
                         }
          }
	printf("\n ⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎⭐︎");	
}