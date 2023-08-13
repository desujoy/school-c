#include<stdio.h>
#include<conio.h>
int main()
{
    int s,i,j,c;
    printf("Enter the Size of Array:");
    scanf("%d",&s);
    int a[s],b[s];
    for(i=0;i<s;i++)
    {
        printf("Enter Number %d:",i+1);
        scanf("%d",&a[i]);
        b[i]=-1;
    }
    for(i=0;i<s;i++)
    {
        c=1;
        for(j=i+1;j<s;j++)
        {
            c=c+1;
            b[j]=0;
        }
    }
    if(b[j]!=0)
    {
        b[j]=c;
    }
    printf("\nFrequency of All Numbers of Array:\n");
    for(i=0;i<s;i++)
    {
        if(b[i]!=0)
        {
            printf("Frequency of %d is %d\n",a[i],b[i]);
        }
    }
    getch();
    return 0;
}
