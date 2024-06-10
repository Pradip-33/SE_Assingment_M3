//Calculate compound interest
#include<stdio.h>
int main()
{
    int a,b,c,principal,rate,time=6;
    printf("\n\n\t\t\t Enter the value of the principal:");
    scanf("\n\n\t\t\t %d",&principal);
    printf("\n\n\t\t\t Enter the value of the rate:");
    scanf("\n\n\t\t\t %d",&rate);
    a=rate/100;
    b=principal*(1+a);
    c=b*b*b*b*b*b;
    printf("\n\n\t\t\t compound interest:%d",c);
}