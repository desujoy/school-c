#include<stdio.h>
#include<conio.h>
void main()
{
    int l,e,i,s=0;
    printf("Enter Array Length:");
    scanf("%d",&l);
    int x[l];
    for(i=0;i<l;i++)
    {
        printf("Enter Element %d:",i+1);
        scanf("%d",&x[i]);
    }
    e=(l/2)+1;
    for(i=0;i<l;i=i+2)
        s=s+x[i];
    printf("Average of Even Positional Elements is %d",(s/e));
    getch();
}
