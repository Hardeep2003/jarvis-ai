#include<stdio.h>
#include<conio.h>
void main()
{
    FILE  *fp;
    char text[30];
    int age;
    fp=fopen("TEXT.txt","w");
    printf("Enter the text in the file");
    gets(text);
    scanf("%d",age);
    fprintf(fp,"%s%d",text,age);
    fclose(fp);

    fp=fopen("TEXT.txt","r");
    fscanf(fp,"%s%d",text,age);

    printf("Name of Student %s and age is %d",text,age);
    fclose(fp);
}