#include<stdio.h>
#include<conio.h>
int main()
{
    int p=1,n,i;
    printf("\n enter value");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    p=p*i;
    {
        printf("\n=%d",p);
    }
    return 0;
    getch();
}
