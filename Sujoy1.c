#include<stdio.h>
#include<conio.h>

int main()
{
    int n,m;
    printf("Enter Marks:");
    scanf("%d",&n);
    m=n/10;
    switch(m)
    {
        case 10:printf("FULL MARKS!");
        case 9:if (n>=91&&n<=100)
                    printf("Outstanding");
        break;
        case 8:if (n>=81&&n<=90)
                    printf("Execellent");
        break;
        case 7:if (n>=71&&n<=80)
                    printf("Very Good");
        break;
        case 6:if (n>=61&&n<=70)
                    printf("Good");
        break;
        case 5:if (n>=51&&n<=60)
                    printf("Satisfactory");
        break;
        case 4:if (n>=41&&n<=50)
                    printf("Standard");
        break;
        default:printf("FAIL!");
    }
    getch();
    return 0;
}
