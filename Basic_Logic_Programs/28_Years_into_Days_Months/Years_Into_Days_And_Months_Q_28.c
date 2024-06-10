//Convert years into days and months
#include<stdio.h>
int main()
{
    int Y,D,M;
    printf("\n\n\t Enter the years:");
    scanf("\n\n\t %d",&Y);
    M=Y*12;
    D=Y*365;
    printf("\n\n\t Years into Months:%d",M);
    printf("\n\n\t Years into Days:%d",D);
}