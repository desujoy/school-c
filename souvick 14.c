#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,n;
    printf("Enter the limit  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n-i;j>=1;j=j-1)
        {
            printf(" ");
        }
        for(k=1;k<=i;k=k+1)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
    getch();
}
