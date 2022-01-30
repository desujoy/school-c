#include<stdio.h>
#include<conio.h>
void main ()
{
    int i,n,a,b=0;
    printf("enter the number");
    scanf("%d",&n);
    int x[n];
    printf("enter number in array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=1;i<n;i=i+2)
    {
        a=x[i];
        b=b+a;
    }
    printf("the result is %d",b);
    getch();
}
