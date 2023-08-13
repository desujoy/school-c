#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],i,j;
    long d;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter Row %d Column %d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Determinant:");
    d=a[0][0]*((a[1][1]*a[2][2])-(a[2][1]*a[1][2]))-a[0][1]*((a[1][0]*a[2][2])-(a[2][0]*a[1][2]))+a[0][2]*((a[1][0]*a[2][1])-(a[2][0]*a[1][1]));
    printf("%d",d);
    getch();
}
