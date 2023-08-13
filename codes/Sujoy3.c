#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,f,fact,s=0;
    printf("Enter factorial range:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(f=1;f<=i;f++)
            {
                fact=fact*f;
            }
        printf("%d! is %d\n",i,fact);
        s=s+fact;
        fact=1;
    }
    printf("Sum is %d.",s);
    getch();
}
