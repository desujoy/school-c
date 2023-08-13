#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    a='!';
    v:printf("%c ",a);
    a++;
    getch();
    goto v;
    return 0;
}
