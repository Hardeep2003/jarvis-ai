#include <stdio.h>
int main()
{
FILE *fx;
fx = fopen("new_file.txt", "r");

fseek(fx, 0, SEEK_END);

printf("Position of file pointer is : ");
printf("%ld \n", ftell(fx));
fseek(fx,10,SEEK_SET);
int ch;

printf("Resulting bytes after the 10 characters in a file are: ");
while( (ch=fgetc(fx)) != EOF)
 
putchar(ch);
return 0;
}