#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;
    n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    getch();
    return 0;
}
