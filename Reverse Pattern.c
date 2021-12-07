#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,k;
    printf("Enter Limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1-i;j++)
            printf(" ");
        for(k=i;k>=1;k--)
            printf("X ");
        printf("\n");
    }
    getch();

}
