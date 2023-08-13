#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,k,x,y,z;
    printf("Enter Limit:");
    scanf("%d",&n);
    for(x=n;x>=1;x--)
    {
        for(y=1;y<=x;y++)
            printf(" ");
        for(z=1;z<=n+1-x;z++)
            printf("X ");
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf(" ");
        for(k=1;k<=n+1-i;k++)
            printf("X ");
        printf("\n");
    }
    getch();
    return 0;
}
