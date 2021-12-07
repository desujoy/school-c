#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;
    printf("Enter Limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    getch();
    return 0;
}
