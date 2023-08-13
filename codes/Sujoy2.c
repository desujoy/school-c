#include <stdio.h>
#include <conio.h>
void main()
{
	int n;
	printf("Enter Year:");
	scanf("%d",n);
	if (n%100==0)
	{
		if (n%400==0)
			printf("Year is Leapyear");
		else
			printf("Year is not Leapyear");
	}
	else
	{
		if (n%4==0)
			printf("Year is Leapyear");
		else
			printf("Year is not Leapyear");
	}
	getch();

}
