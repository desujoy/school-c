#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("Enter Any Number:");
    scanf("%d",&n);
    printf("Reverse is ");
    while(n!=0)
    {
        i=n%10;
        n=n/10;
        printf("%d",i);
    }
    getch();
    return 0;
}
