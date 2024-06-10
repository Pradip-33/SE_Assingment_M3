
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;

    printf("\n\t Enter the number:");
    scanf("%d",&a);
    printf("\n\t Enter the number:");
    scanf("%d",&b);
    printf("\n ______________________________");
    printf("\n\t Basic Arithmetics");
    printf("\n ______________________________ ");
    printf("\n\t Press 1 for Addittion");
    printf("\n\t Press 2 for Subtraction");
    printf("\n\t Press 3 for Multiplication");
    printf("\n\t Press 4 for Division");
    printf("\n\t Press 5 for Close");
    printf("\n ______________________________ ");
    printf("\n\t Enter the number:");
    scanf("%d",&c);
    if(c==1)
        {
            printf("\n\t Addittion:%d",a+b);
        }
    else if(c==2)
        {
            printf("\n\t Subtraction:%d",a-b);
        }
    else if(c==3)
        {
            printf("\n\t AMultiplication:%d",a*b);
        }
    else if(c==4)
        {
            printf("\n\t ADivision:%d",a/b);
        }    
    else if(c==5)
        {
            exit(0);
        }
    else
    {
        printf("\n\t Try Again");
    }
}