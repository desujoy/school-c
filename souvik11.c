#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,r1,c1,r2,c2,s,k;
    start:
    //Input Matrixes
    printf("Enter Row Number of 1st Martix:");
    scanf("%d",&r1);
    printf("Enter Column Number of 1st Martix:");
    scanf("%d",&c1);
    int a[r1][c1];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("Enter Row %d Column %d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter Row Number of 2nd Martix:");
    scanf("%d",&r2);
    printf("Enter Column Number of 2nd Martix:");
    scanf("%d",&c2);
    int b[r2][c2];
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("Enter Row %d Column %d:",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    int c[r1][c2];
    //Checking Productivity
    if(c1!=r2)
    {
        printf("\nWRONG INPUT!\n\n");
        goto start;
    }
    //Main Function
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            c[i][j]=0;
            for(k=0;k<c1;k++)
            {
                c[i][j]+=(a[i][k]*b[k][j]);
            }
        }
    }
    //Print Result
    printf("The Product is:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}

