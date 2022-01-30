#include<stdio.h>
#include<conio.h>
void main ()
{
    int i,j;
    int x[3][3];
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
           printf("Enter Row %d Column %d:",i+1,j+1);
           scanf("%d",&x[i][j]);
       }
    }
    printf("The values are\n");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
           printf("%d\t",x[i][j]);
       }
       printf("\n");
    }
    getch();
}
