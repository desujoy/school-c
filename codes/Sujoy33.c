#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;
    printf("Enter Number Count:");
    scanf("%d",&n);
    int x[n+1],f[n+1];
    for(i=1;i<=n;i++)
    {
        printf("Enter Number %d:",i);
        scanf("%d",&x[i]);
        f[i]=1;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=x[i];j++)
        {
            f[i]=f[i]*j;
        }
    }
    for(i=1;i<=n;i++)
        printf("Factorial of %d is %d\n",x[i],f[i]);
    getch();
    return 0;
}
