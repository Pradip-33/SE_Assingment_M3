/*37. WAP to show
(ii). Vowel or Consonant using switch case*/
#include<stdio.h>
int main()
{
    char c;
    printf("\n --------------------------------------------");
    printf("\n\n\t Enter the vowel : ");
    scanf("\n\n\t %c",&c);
    printf("\n --------------------------------------------");
    switch(c)
    {
        case 'a' : printf("\n\n\t This Character is Vowel ");
                    break;
        case 'e' : printf("\n\n\t This Character is Vowel ");
                    break;
        case 'i' : printf("\n\n\t This Character is Vowel ");
                    break;
        case 'o' : printf("\n\n\t This Character is Vowel ");
                    break;
        case 'u' : printf("\n\n\t This Character is Vowel ");
                    break;
        case 'A' : printf("\n\n\t This Character is Vowel ");
                    break;
        case 'E' : printf("\n\n\t This Character is Vowel ");
                    break;
        case 'I' : printf("\n\n\t This Character is Vowel ");
                    break;
        case 'O' : printf("\n\n\t This Character is Vowel ");
                    break;
        case 'U' : printf("\n\n\t This Character is Vowel ");
                    break;
        default : printf("\n\n\t This Character is Consonant");
                    break;
        
    }
    
}