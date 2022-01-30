#include<stdio.h>
#include<conio.h>
int main()
{
    int x[5],i;
    for(i=1;i<=5;i++)
    {
        printf("Enter Number %d:",i);
        scanf("%d",&x[i]);
    }
    printf("The Numbers are ");
    for(i=1;i<=5;i++)
        printf("%d",x[i]);
    getch();
    return 0;
}
