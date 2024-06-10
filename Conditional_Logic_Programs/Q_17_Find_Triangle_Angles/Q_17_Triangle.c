/*Write a C program to check whether a triangle can be formed with the given
values for the angles.*/
#include<stdio.h>
int main()
{
    int A,B,C,S;
    printf("-----Enter the angles of triangles-----");
    printf("\n\t angle A:");
    scanf("%d",&A);
    printf("\n-------------------------------------");
    printf("\n\t angle B:");
    scanf("%d",&B);
    printf("\n-------------------------------------");
    printf("\n\t angle C:");
    scanf("%d",&C);
    S=A+B+C;
    printf("\n-------------------------------------");
    printf("\n\ttriangle values are : %d",S);
    printf("\n-------------------------------------");
    if(S==180)
    {
        printf("\n Triangle angles are valid");
    }
    else if (S>=180)
    {
       printf("\n Triangle angles are invalid"); 
    }
    else if (S!=180)
    {
       printf("\n Triangle angles are invalid"); 
    }
    else
    {
        printf("\n\t this not a triangle");
    }
printf("\n-------------------------------------");

}