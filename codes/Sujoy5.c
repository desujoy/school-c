#include<stdio.h>
#include<conio.h>
void main()
{
    int m,o,s=0;
    printf("Enter Any Number:");
    scanf("%d",&o);
    while(o!=0)
    {
        m=o%10;
        s=s+m;
        o=o/10;
    }
    printf("Result is %d.",s);
    getch();
}
