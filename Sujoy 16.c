#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n,m,c=0,p,o,i,s=0;
    printf("Enter any number:");
    scanf("%d",&n);
    m=n;
    o=n;
    while(o!=0)
    {
        o=o/10;
        c=c+1;
    }
    while(n!=0)
    {
        i=n%10;
        p=pow(i,c);
        s=s+p;
        n=n/10;
    }
    if(m==s)
        printf("This is ARMSTRONG.");
    else
        printf("This is NOT ARMSTRONG.");
    getch();
    return 0;
}
