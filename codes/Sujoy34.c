#include<stdio.h>
#include<conio.h>
int main()
{
    int x[10],i,j,r,f;
    for(i=0;i<10;i++)
    {
        printf("Enter Number %d:",i+1);
        scanf("%d",&x[i]);
    }
    printf("The Prime Numbers:\n");
    for(i=0;i<10;i++)
    {
        for(j=2;j<=x[i];j++)
        {
            r=x[i]%j;
            if(r==0)
            {
                f=0;
                break;
            }
            else
            {
                f=1;
                break;
            }
        }
        if(f==1)
            printf("%d\n",x[i]);
    }
    getch();
    return 0;
}
