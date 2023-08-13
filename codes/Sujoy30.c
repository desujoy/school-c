#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,s1=0,s2=0;
    printf("Enter Number count:");
    scanf("%d",&n);
    int x[n+1];
    for(i=1;i<=n;i++)
    {
        printf("Enter Number %d:",i);
        scanf("%d",&x[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(x[i]%2==0)
        {
            s1=s1+x[i];
        }
        else
        {
            s2=s2+x[i];
        }
    }
    printf("The Sum of Evens:%d\n",s1);
    printf("The Sum of Odds:%d\n",s2);
    getch();
    return 0;
}
