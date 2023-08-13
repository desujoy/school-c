#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,k,f;
    printf("Enter Number Count:");
    scanf("%d",&n);
    int x[n+1];
    for(i=1;i<=n;i++)
    {
        printf("Enter Number %d:",i);
        scanf("%d",&x[i]);
    }
    printf("Numbers in Descending Order:-\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            for(k=1;k<=n;k++)
            {
                if(x[j]<x[k])
                {
                    f=j;
                }
            }
        }
        printf("%d\n",x[f]);
        x[f]=2147483647;
    }
    getch();
}
