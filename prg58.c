#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *f1,*f2,*f3;
    int number,i;
    printf("contents of DATA file");
    f1=fopen("DATA","w");
    for(i=1;i<=50;i++)
    {
        scanf("%d",&number);
        putw(number,f1);

    }
    fclose(f1);
    f1=fopen("DATA","r");
    f2=fopen("ODD File","w");
    f3=fopen("EVEN File","w");
    while(number=getw(f1)!=EOF)
    {
        if(number%2==0)
        {
            putw(number,f2);

        }
        else{
            putw(number,f2);

        }
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
}