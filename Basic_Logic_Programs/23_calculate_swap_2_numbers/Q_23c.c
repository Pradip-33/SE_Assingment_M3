//WAP to calculate swap 2 numbers with using of multiplication and division.
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("\n\n\t\t Enter the value of num1:");
    scanf("\n\n\t\t %d",&num1);
    printf("\n\n\t\t Enter the value of num2:");
    scanf("\n\n\t\t %d",&num2);
    printf("\n_____________________________________________________");
    printf("\n\n\t\t befor swaping");
    printf("\n\n\t\t num1=%d num2=%d",num1,num2);
    num1=num1*num2;
    num2=num1/num2;
    num1=num1/num2;
    printf("\n_____________________________________________________");
    printf("\n\n\t\t after swaping");
    printf("\n\n\t\t num1=%d num2=%d",num1,num2);
   
}