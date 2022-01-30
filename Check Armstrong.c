#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,a,b=0,i,t,l=0;
    printf("Enter number:");
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        l++;
        n=n/10;
    }
    for(i=t;i!=0;i=i/10)
    {
        a=i%10;
        b=b+pow(a,l);
    }
    if(b==t)
        printf("This is a Armstrong.");
    else
        printf("This is not Armstrong.");
    getch();
}
