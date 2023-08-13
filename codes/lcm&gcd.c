#include<stdio.h>
#include<conio.h>
int main()
{
    int n,m,num,den,rem,lcm,gcd;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Enter another number:");
    scanf("%d",&m);
    if(n>m)
    {
        num=n;
        den=m;
    }
    else
    {
        num=m;
        den=n;
    }
    rem=num%den;
    while(rem!=0)
    {
        num=den;
        den=rem;
        rem=num%den;
    }
    gcd=den;
    lcm=n*m/gcd;
    printf("LCM is %d\n",lcm);
    printf("GCD is %d",gcd);
    getch();
    return 0;
}
