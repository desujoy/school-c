#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,f,a;
    printf("Enter Array Length:");
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        printf("Enter Number %d:",i+1);
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        f=0;
        //a=x[i];
        for(j=0;j<n;j++)
        {
            if(x[i]==x[j])
            {
                f=f+1;
                //x[j]=0;
            }
        }
        printf("Frequency of %d is %d.\n",x[i],f);
    }
    getch();
    return 0;
}
