 #include<stdio.h>

void main()

{

	int C,D,temp;

	printf("enter value of C =");

	scanf("%d",&C);

	printf("enter the value of D =");


	scanf("%d",&D);

	temp=C;

	C=D;

	D=temp;

	printf("\n after swaping the value of C = %d",C);

	printf("\n after swaping the value of D = %d",D);

}
