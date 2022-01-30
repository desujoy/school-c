#include<stdio.h>
#include<conio.h>
void main()
{
    int l,i,j;
    printf("Enter Array Length:");
    scanf("%d",&l);
    int x[l];
    for(i=0;i<l;i++)
    {
        printf("Enter Element %d:",i+1);
        scanf("%d",&x[i]);
    }
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(x[i]==x[j])
            {
                x[j]=NULL;
            }
        }
    }
    printf("New Array is\n");
    for(i=0;i<l;i++)
    {
        if(x[i]!=NULL)
            printf("%d\t",x[i]);
    }
    getch();
}
