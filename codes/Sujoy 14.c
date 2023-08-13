#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,k;
    printf("Enter Pattern Limit:");
    scanf("%d",&n);
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
