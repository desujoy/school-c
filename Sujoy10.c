#include <stdio.h>
#include<conio.h>
int main()
{
    int n1, n2, min;
    printf("Enter 1st positive integer: ");
    scanf("%d", &n1);
    printf("Enter 2nd positive integer: ");
    scanf("%d", &n2);
    min = (n1 > n2) ? n1 : n2;

    while (1)
    {
        if (min % n1 == 0 && min % n2 == 0)
        {
            printf("The LCM of %d and %d is %d.", n1, n2, min);
            break;
        }
        ++min;
    }
    getch();
    return 0;
}
