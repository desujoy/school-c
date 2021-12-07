#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("Enter any number:");
    scanf("%d",&n);
    printf("Reverse is ");
    for(i=n;i!=0;i=i/10)
        printf("%d",i%10);
    getch();
    return 0;
}
