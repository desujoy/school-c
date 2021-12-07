#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,max,mid,min;
    printf("Enter 1st no.:");
    scanf("%d",&a);
    printf("Enter 2nd no.:");
    scanf("%d",&b);
    printf("Enter 3rd no.:");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            max=a;
            if(b>c)
            {
                mid=b;
                min=c;
            }
            else
            {
                mid=c;
                min=b;
            }
        }

    }
    else
    {
        if(b>c)
        {
            max=b;
            if(a>c)
            {
                mid=a;
                min=c;
            }
            else
            {
                mid=c;
                min=a;
            }
        }
        else
        {
            max=c;
            if(a>b)
            {
                mid=a;
                min=b;
            }
            else
            {
                mid=b;
                min=a;
            }
        }
    }
    printf("Maximum=%d; Mid Value=%d; Minimum=%d.",max,mid,min);
    getch();
    return 0;
}
