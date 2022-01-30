#include<stdio.h>
#include<conio.h>
#include<math.h>
void main ()
{
    int i,c,a=0,b=0;
    int x[5];
    printf("Enter the elements in array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<5;i++)
    {
        c=x[i]%2;
        if(c==0)
        {
            a=a+x[i];
        }
        /*else
        {
            b=b+x[i];
        }*/

    }
    printf("the sum of even numbers is %d",a);
    //printf("the sum of odd numbers is %d",b);
    getch();
}
