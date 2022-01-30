#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter 1st No.:");
    scanf("%d",&a);
    printf("Enter 2nd No.:");
    scanf("%d",&b);
    printf("Before Swapping: a=%d  b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swapping: a=%d  b=%d\n",a,b);
    getch();
}
