#include<stdio.h>
#include<conio.h>
int main()
{
    int l,i;
    printf("Enter Array Length:");
    scanf("%d",&l);
    int x[l],e[l],o[l];
    for(i=0;i<l;i++)
    {
        printf("Enter Element %d:",i+1);
        scanf("%d",&x[i]);
        o[i]=0;
        e[i]=0;
    }
    for(i=0;i<l;i++)
    {
        if((x[i]%2)!=0)
            o[i]=x[i];
        else
            e[i]=x[i];
    }
    printf("\nThe Odd Numbers are ");
    for(i=0;i<l;i++)
    {
        if(o[i]!=0)
            printf("%d\t",o[i]);
    }
    printf("\nThe Even Numbers are ");
    for(i=0;i<l;i++)
    {
        if(e[i]!=0)
            printf("%d\t",e[i]);
    }
    getch();
    return 0;
}
