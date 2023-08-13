#include<stdio.h>
#include<conio.h>
void main ()
{
    int i,j;
    int a[3][4],b[3][4],c[3][4];
    printf("Enter 1st Matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("row %d column %d = ",i+1,j+1);
         scanf("%d",&a[i][j]);
         }
    }
    printf("Enter 2nd Matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("row %d column %d = ",i+1,j+1);
            scanf("%d",&b[i][j]);
            }
         }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("The Result is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    getch();

}
