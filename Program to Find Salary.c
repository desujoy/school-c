#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,s;
    printf("Enter Your Class:");
    scanf("%d",&a);
    printf("Enter Your Roll No.:");
    scanf("%d",&b);
    if (a>=5 && a<=8)
    {
        if (b>=1 && b<=10)
            s=550;
        else if (b>=10 && b<=40)
            s=400;
        else if (b>=41 && b<=100)
            s=500;
        else
            s=550;
    }
    else if (a>=9 && a<=10)
    {

        if (b>=1 && b<=10)
            s=500;
        else if (b>=10 && b<=40)
            s=550;
        else if (b>=41 && b<=100)
            s=600;
        else
            s=650;

    }
    printf("Your Salary is %d",s);
    getch();
}
