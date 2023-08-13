#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("Enter Number Count:");
    scanf("%d",&n);
    int x[n+1];
    for(i=1;i<=n;i++)
    {
        printf("Enter Number %d:",i);
        scanf("%d",&x[i]);
    }
    int h=x[1],l=x[1],hp=1,lp=1;
    for(i=2;i<=n;i++)
    {
        if(x[i]>h)
        {
            h=x[i];
            hp=i;
        }
        if(x[i]<l)
        {
            l=x[i];
            lp=i;
        }
    }
    printf("Maximum is %d; Minimum is %d.\n",h,l);
    printf("Highest Position %d\nLowest Position %d",hp,lp);
    getch();
    return 0;
}
