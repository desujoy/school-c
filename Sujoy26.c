#include<stdio.h>
#include<conio.h>
int main()
{
    int n,m;
    printf("Enter Any Number:");
    scanf("%d",&n);
    printf("Reverse Is ");
    while(n!=0)
    {
        m=n%10;
        printf("%d",m);
        n=n/10;
    }
    getch();
    return 0;
}
