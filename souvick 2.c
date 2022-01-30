#include<stdio.h>
#include<conio.h>
void main ()
{
    int n,i,s=0;
    printf("enter the loop number");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        s=s+i;

    }
    printf("%d",s);
    getch();
}
