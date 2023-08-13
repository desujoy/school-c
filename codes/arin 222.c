#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,s=0;
    printf("\n enter value");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
    {
        s=s+i;
    }
    printf("\n=%d",s);
    return 0;
    getch();
}

