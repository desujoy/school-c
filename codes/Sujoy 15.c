#include<stdio.h>
#include<conio.h>
int main()
{
    int n,m,i,s=0;
    printf("Enter any number:");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        i=n%10;
        s=s*10+i;
        n=n/10;
    }
    if(m==s)
        printf("The number is PALINDROME.");
    else
        printf("The number is NOT PALINDROME.");
    getch();
    return 0;
}
