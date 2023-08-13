#include<stdio.h>
#include<conio.h>
int main()
{
    int s,i,j,c;
    printf("Enter Array Length:");
    scanf("%d",&s);
    int a[s],b[s];
    for(i=0;i<s;i++)
    {
        printf("Enter Element %d:",i+1);
        scanf("%d",&a[i]);
        b[i]=-1;
    }
    for(i=0;i<s;i++)
    {
        c=1;
        for(j=i+1;j<s;j++)
        {
            if(a[i]==a[j])
            {
                ++c;
                b[j]=0;
            }
        }
        if(b[i]!=0)
        {
            b[i]=c;
        }
    }
    for(i=0;i<s;i++)
    {
        if(b[i]!=0)
        {
            printf("Frequency of %d is %d.\n",a[i],b[i]);
        }
    }
    getch();
    return 0;
}
