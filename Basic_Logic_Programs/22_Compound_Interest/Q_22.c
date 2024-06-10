/*. Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P */
#include<stdio.h>
int main()
{
    int a,b,c,d,principal,rate,time=6;
    printf("\n\n\t\t\t Enter the value of the principal:");
    scanf("\n\n\t\t\t %d",&principal);
    printf("\n\n\t\t\t Enter the value of the rate:");
    scanf("\n\n\t\t\t %d",&rate);
    a=rate/100;
    b=principal*(1+a);
    c=b*b*b*b*b*b;
    printf("\n\n\t\t\t Ammount:%d",c);
    d=c - principal;
    printf("\n\n\t\t\t Compound Interest:%d",d);

}