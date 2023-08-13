#include<stdio.h>
#include<conio.h>
void main()
{
    int n=1,p,s=p-1,i,j,k;
    printf("Enter Limit:");
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
        for(j=s;j>i;j--)
            printf(" ");
        for(k=1;k<n;k++)
            printf("*");
        n+=2;
        printf("\n");
    }
    getch();
}
