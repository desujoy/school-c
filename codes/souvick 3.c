#include<stdio.h>
#include<conio.h>
void main ()
{
    int n,i,f=1;
    printf("enter the loop number");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
        f=f*i;
    }
    printf("value=%d",f);
    getch();
}
