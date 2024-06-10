// WAP to input the week number and print week day.
#include<stdio.h>
int main()
{
    int w,d;// week , days
    printf("---------------------------------");
    printf("\n\t Enter the Number of Weeks : ");
    scanf("%d",&w);
    d=w*7; // number of weeks multiplay with 7 
    printf("\n\t Total days in week :%d",d);
    printf("\n---------------------------------");
}