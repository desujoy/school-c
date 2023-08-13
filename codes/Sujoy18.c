#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 2
int main()
{
    int f0=0,f1=1,f,p,n,count=0,flag=TRUE;
    printf("Enter the number of term=");
    scanf("%d",&n);
    while(count<n)
    {
        f=f0+f1;
        p=f1+1;
        while(p<f&&flag)
        {
            printf(" %d",p);
            p++;
            count++;
            if(count==n)
                flag=FALSE;
        }
        f0=f1;
        f1=f;
    }
    getch();
    return 0;
}
