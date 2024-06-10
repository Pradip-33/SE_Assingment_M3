/*WAP to accept the height of a person in centimeters and categorize the
person according to their height.*/
#include<stdio.h>
int main()
{
    int h;
    //enter the hight of person in centimeter
    printf("\n\t Enter the hight :");
    scanf("\n\t %d",&h);
    if(h>170)
      {  
        printf("\n\t your hight is so long");
      }
      else if(h>160 && h<170)
      {
        printf("\n\t your hight is medium");
      }
      else if(h>120 && h<160)
      {
        printf("\n\t your hight is short");
      }
      else
      {
        printf("\n\t your hight is to short");
      }
}