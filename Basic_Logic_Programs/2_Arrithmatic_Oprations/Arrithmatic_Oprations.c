/*Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo)*/
#include<stdio.h>

int main()
{
    int a, b, c;
    printf("\n\n\t intput a num 1: ");
    scanf("%d", &a);
    printf("\n\n\t intput a num 2: ");
    scanf("%d1", &b);

    c=a+b;//Expression
    printf("\n\n\t Addition");
    printf("\n\n\t print value of c :%d", c);
    printf("\n__________________________________________");
    c=a-b;//Expression
    printf("\n\n\t subtraction");
    printf("\n\n\t print value of c :%d", c);
    printf("\n__________________________________________");
    c=a*b;//Expression
    printf("\n\n\t multiplication");
    printf("\n\n\t print value of c :%d", c);
    printf("\n__________________________________________");
    c=a/b;//Expression
    printf("\n\n\t division");
    printf("\n\n\t print value of c :%d", c);
    printf("\n__________________________________________");
    c=a%b;//Expression
    printf("\n\n\t modulo");
    printf("\n\n\t print value of c :%d", c);
    printf("\n__________________________________________");
}