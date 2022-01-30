#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,m,n;
    printf("enter array number");
    scanf("%d",&n);
    int x[n+1];
    for(i=1;i<=n;i++)
    {
        printf("enter number");
        scanf("%d",&x[i]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(x[i]<x[j])
            {
              m=x[i];
              x[i]=x[j];
              x[j]=m;

            }
        }
    }
    printf("descending order is\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\n",x[i]);
    }
    getch();
}
