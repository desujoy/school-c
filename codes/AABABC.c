#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;
    start:
    printf("Enter Limit(1 to 26):");
    scanf("%d",&n);
    if(n>26)
    {
        printf("Wrong Input.\n");
        goto start;
    }
    else
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
                printf("%c",'A'-1+j);
            printf("\n");
        }
    getch();
}
