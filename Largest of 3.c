#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter value for a:");
    scanf("%d",&a);
    printf("Enter value for b:");
    scanf("%d",&b);
    printf("Enter value for c:");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
            printf("a is the biggest number");
        else
            printf("c is the biggest number");
    }
    if(b>c)
        printf("b is the biggest number");
    else
        printf("c is the biggest number");
    getch();
}
