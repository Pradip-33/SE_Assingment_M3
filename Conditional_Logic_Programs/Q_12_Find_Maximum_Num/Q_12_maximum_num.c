//WAP to find maximum number among 3 numbers using ternary operator
#include <stdio.h>

int main() 
{
    int X, Y, Z, A;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &X, &Y, &Z);


    A = (X > Y) ? ((X > Z) ? X : Z) : ((Y > Z) ? Y : Z);

    printf("\n\t Maximum number is: %d\n", A);

}
