#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,a;
    printf("Enter Number Count:");
    scanf("%d",&n);
    int x[n+1];
    for(i=1;i<=n;i++)
    {
        printf("Enter Number %d:",i);
        scanf("%d",&x[i]);
    }
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=n;++j)
        {
            if(x[i]>x[j])
            {
                a=x[i];
                x[i]=x[j];
                x[j]=a;
            }
        }
    }
    printf("Descending Order:\n");
    for(i=1;i<=n;i++)
        printf("\t%d\n",x[i]);
    printf("Ascending Order:\n");
    for(i=n;i>=1;i--)
        printf("\t%d\n",x[i]);
    getch();
    //return 0;
}
