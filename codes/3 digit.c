#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a,bc,b,c;
    printf("Enter any 3 Digit Number:");
    scanf("%d",&n);
    a=n/100;
    bc=n%100;
    b=bc/10;
    c=bc%10;
    printf("Reverse is %d%d%d.",c,b,a);
    getch();
    return 0;
}
