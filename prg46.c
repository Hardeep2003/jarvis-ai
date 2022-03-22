
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[30],b[30];
int ch,n;

printf("\n1:length of string:");
printf("\n2:copy string");
printf("\n3:compare string");
printf("\n4:concatenate two string");
printf("\nenter your choice :");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\nenter the string:");
       flushall();
       gets(a);
       n=strlen(a);
       printf("\nthe lenght of string is :%d",n);
       break;
case 2:printf("\nenter the firs string :");
       flushall();
       scanf("%s",&a);
       strcpy(b,a);
       printf("the copied string is :%s",b);
       break;
case 3:printf("\nenter first string :");
       flushall();
       scanf("%s",&a);
       printf("\nenter second string :");
       flushall();
       scanf("%s",&b);
       if(strcmp(a,b)>0)
       printf("\nstring a is greater");
       else
       printf("\nstring b is greater");
       break;
case 4:printf("\nenter first string :");
       flushall();
       scanf("%s",&a);
       printf("\nenter second string :");
       flushall();
       scanf("%s",&b);
       strcat(a,b);
       printf("\nthe source string is :%s",b);
       printf("\nthe target string is : %s",a);
       break;

}
getch();
}