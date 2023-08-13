#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,n=0;
	printf("enter value");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		n=a%10;
		printf("%d",n);
        a=a/10;
	}
	getch();
}