/*WAP to Find Area And Circumference of Circle*/
#include<stdio.h>

float main()
{
    float Pi=3.14, area, circumference, radius;
    // enter the radius of circle
    printf("\n\n\t Enter the radius of circle:");
    scanf("\n\n\t %f",&radius);
    // calculate and print the area of circle
    area = Pi * radius * radius;
    printf("\n\n\t Area of circle is %f",area);
    //Calculate and print the Circumference of circle
    circumference = 2 * Pi * radius;
    printf("\n\n\t Circumference of circle is: %f",circumference);

    
}