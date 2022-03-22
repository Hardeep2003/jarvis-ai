#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
    FILE *fp;
    char ch;
    printf("Content of filebefore appending");
    fp=fopen("INPUT.txt","w+");
   
    printf("Write and to stop press(.)");
    while (ch!='.')
    {
        printf("Can't open file");
    }
    printf("Write data and to stop press(.)");
    while (ch!='.')
    {
        ch=getche();
        putc(ch,fp);

    }
    printf("write data and stop press(.)");
    while(ch!='.')
    {
        ch=getc(fp);
        printf("%c",ch);
    }
    rewind(fp);
    while(!feof(fp))
    {
        ch=getc(fp);
        printf("%c",ch);
    }
    fclose(fp);    
    
}