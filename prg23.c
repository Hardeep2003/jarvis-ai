#include<stdio.h>
#include<math.h>
int main()
{
    float BS,DA,HRA,Net_salary;
    printf("Enter the basic salary of the employee\n");
    scanf("%f",&BS);
    DA=0.90*BS;  
    HRA=0.10*BS;  
    Net_salary=BS-(0.10*(BS+DA+HRA));  
    printf("The net salary of the employee is: %f",Net_salary);
    return 0;
}