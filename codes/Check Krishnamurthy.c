#include<stdio.h>
#include<conio.h>
void main()
{
    int f,n,i,b=0,a,t;
    printf("Enter Number:");
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        a=n%10;
        f=1;
        for(i=1;i<=a;i++)
        {
            f=f*i;
        }
        b=b+f;
        n=n/10;
    }
    if(b==t)
        printf("It is Krishnamurthy.");
    else
        printf("It is not Krishnamurthy.");
    getch();
}
