#include<stdio.h>
#include<conio.h>
void main()
{
    int u;
    double a;
    printf("Enter Meter Reading(in unit):");
    scanf("%d",&u);
    if(u>=0&&u<=100)
        a=150;
    else if(u>=101&&u<=200)
        a=150+(u-100)*2.50;
    else if(u>=201&&u<=300)
        a=150+100*2.50+(u-200)*3.00;
    else
        a=150+100*2.50+100*3+(u-300)*4.50;
    printf("Amount Payable: %f/-",a);
    getch();
}
