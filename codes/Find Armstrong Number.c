#include<stdio.h>
#include<conio.h>
int main()
{
    int m,n,a,s=0;
    m=100;
    v:
    n=m;
    printf("checking %d...\n",n);
    while(n>0)
    {
        a=n%10;
        s=s+a*a*a;
        n=n/10;
    }
    if(m==s)
    {
        printf("Found %d\n",m);
        m++;
        goto v;
    }
    else
    {
        m++;
        getch();
        goto v;
    }
    getch();
    return 0;
}
