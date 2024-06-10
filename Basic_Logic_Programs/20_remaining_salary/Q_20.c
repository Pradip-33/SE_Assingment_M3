/*Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary.*/
#include<stdio.h>
int main()
{
    float a, insurance_premium,loan_installment,remaining_salary;
    printf("\n\n\t\t Enter the salary=");
    scanf("\n\n\t\t %f",&a);
    insurance_premium=a*0.1;
    loan_installment=a*0.1;
    remaining_salary=a-(insurance_premium+loan_installment);
    printf("\n\n\t\t Remaining salary: %f",remaining_salary);
}