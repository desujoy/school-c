#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,n,f1,f2,a,b,c;
    printf("Enter Number Count:");
    scanf("%d",&n);
    int x[n+1],p[n+1];
    for(i=1;i<=n;i++)
    {
        printf("Enter Number %d:",i);
        scanf("%d",&x[i]);
    }
    for(j=1;j<=n;j++)
    {
        for(k=1;k<=n;k++)
        {
            if(x[j]>x[k])
            {
                f1=j;
                break;
            }
            if(x[j]<x[k])
            {
                f2=j;
                break;
            }
        }
    }
    printf("Maximum Is %d.\n",x[f1]);
    printf("Minimum Is %d.\n",x[f2]);
    for(a=1;a<=n;a++)
    {
        for(b=1;b<=n;b++)
        {
            for(c=1;c<=n;c++)
            {
                if(x[b]<x[c])
                {
                    p[a]=b;
                    break;
                }
            }
        }
    }
    for(a=1;a<=n;a++)
        printf("Position %d = %d.\n",a,p[a]);
    getch();
    return 0;
}
