/*.Accept 2 numbers from user and swap 2 numbers with using 3rd variable
and without using 3rd variable*/
#include<stdio.h>
int main()
{
    int n1,n2,n3,num1,num2;
    //enter the n1 value
    printf("\n\n\t\t Enter the value of n1:");
    scanf("\n\n\t\t %d",&n1);
    //enter the n2 value 
    printf("\n\n\t\t Enter the value of n2:");
    scanf("\n\n\t\t %d",&n2);
    printf("\n_____________________________________________________");
    printf("\n\n\t\t befor swaping");
    printf("\n\n\t\t n1=%d n2=%d",n1,n2);
    n3=n1;
    n1=n2;
    n2=n3;
    printf("\n_____________________________________________________");
    printf("\n\n\t\t after  swaping");
    printf("\n\n\t\t n1=%d n2=%d",n1,n2);
    printf("\n_____________________________________________________");
    printf("\n\n\t\t value of the n1 is %d",n1);
    printf("\n\n\t\t value of the n2 is %d",n2);
    printf("\n_____________________________________________________");
    printf("\n\n\t\t Enter the value of num1:");
    scanf("\n\n\t\t %d",&num1);
    printf("\n\n\t\t Enter the value of num2:");
    scanf("\n\n\t\t %d",&num2);
    printf("\n_____________________________________________________");
    printf("\n\n\t\t befor swaping");
    printf("\n\n\t\t num1=%d num2=%d",num1,num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("\n_____________________________________________________");
    printf("\n\n\t\t after swaping");
    printf("\n\n\t\t num1=%d num2=%d",num1,num2);
    printf("\n_____________________________________________________");
    printf("\n\n\t\t num1=%d",num2);
    printf("\n\n\t\t num2:%d",num1);
    printf("\n_____________________________________________________");
    
}