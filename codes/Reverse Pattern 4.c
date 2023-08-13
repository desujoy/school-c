#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,k;
    printf("Enter Limit:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n+1-i;j++)
            printf(" ");
        for(k=i;k>=1;k--)
            printf("*");
        printf("\n");
    }
    getch();

}
