#include<stdio.h>
#include<conio.h>
int main()
{
    char i;
    int j;
    for(i='a';i<='e';i++)
    {
        for(j=1;j<=5;j++)
            printf("%c ",i);
        printf("\n");
    }
    getch();
    return 0;
}
