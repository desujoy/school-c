#include<stdio.h>
#include<conio.h>
void main()
{
    int a=0,b=1,c=1,n,i;
    printf("Enter Fibonacci Range:");
    scanf("%d",&n);
    printf("%d, %d",a,b);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf(", %d",c);
        a=b;
        b=c;
    }
    getch();
}
