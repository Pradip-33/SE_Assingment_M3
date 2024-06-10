//WAP to convert years into days and days into years
#include<stdio.h>
int main()
{
    int Y,D;
    printf("\n\n\t Enter the years:");
    scanf("\n\n\t %d",&Y);
    D=Y*365;
    printf("\n\n\t Days into year:%d",D);
    printf("\n\n\t Enter the day :");
    scanf("\n\n\t %d",&D);
    Y=D/365;
    printf("\n\n\t Days into year:%d",Y);
}