#include<stdio.h>
#include<conio.h>
int main()
{
    int n,m,num,den,rem,lcm,gcf;
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
    gcf=den;
    lcm=n*m/gcf;
    printf("LCM is %d\n",lcm);
    printf("GCF is %d",gcf);
    getch();
    return 0;
}
