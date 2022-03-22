#include<stdio.h>
void main()
{
int num1, index, result, temp; 
 
printf("Enter the number:");
scanf ("%d", &num1);
 
printf("Enter the index:");
scanf("%d", &index);
 
result=1;
temp=1;
 
while(temp<=index)
 
{
result = result*num1;
 
temp++;
 
}
 
printf("%d raised to %d is: %d ", num1, index, result);
 
}