#include<stdio.h>
#include<conio.h>
int main()
{
    int l,d,i;
     printf("Enter Array Length:");
    scanf("%d",&l);
    int x[l];
    for(i=0;i<l;i++)
    {
        printf("Enter Element %d:",i+1);
        scanf("%d",&x[i]);
    }
    printf("The Array is:\n");
    for(i=0;i<l;i++)
    {
        printf("%d\t",x[i]);
    }
    printf("\nEnter the Number to Be Deleted:");
    scanf("%d",&d);
    for(i=0;i<l;i++)
    {
        if(x[i]==d)
            x[i]=NULL;
    }
    printf("New Array is:\n");
    for(i=0;i<l;i++)
    {
        if(x[i]!=NULL)
            printf("%d\t",x[i]);
    }
    getch();
    return 0;
}
