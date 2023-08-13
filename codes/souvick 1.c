#include<stdio.h>
#include<conio.h>
void main()
{
    int a,m;
    printf(" enter a number");
    scanf("%d",&a);
    m=a/10;
    switch(m)
    {
        case 10: printf("fullmarks");
        break;
        case 9 : printf("outstanding");
        break;
        case 8 : printf("very good");
        break;
        case 7 : printf("good");
        break;
        case 6 : printf("standard");
        break;
        case 5 : printf("satisfactory");
        break;
        default : printf("fail");
        break;
    }
    getch();

}
