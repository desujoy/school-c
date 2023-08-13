#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    //Dec to All
    int n,m,i=0,s=0,l=0,p,c;
    printf("Enter Decimal Number:");
    scanf("%d",&n);
    v:
    printf("Convert into:\n1. Binary\n2. Octal\n3. Hexadecimal\nChoose:");
    scanf("%d",&c);
    switch(c)
    {
        case 1:p=2;
        break;
        case 2:p=8;
        break;
        case 3:p=16;
        break;
        default:printf("\nWrong Input.\n\n");
        goto v;
        break;
    }
    int r[n];
    while(n>0)
    {
        r[i]=n%p;
        n=n/p;
        ++i;
        ++l;
    }
    printf("Answer is %d",s);
    for(i=l-1;i>=0;i--)
    {
        switch(r[i])
        {
            case 10:printf("A");
            break;
            case 11:printf("B");
            break;
            case 12:printf("C");
            break;
            case 13:printf("D");
            break;
            case 14:printf("E");
            break;
            case 15:printf("F");
            break;
            default:printf("%d",r[i]);
            break;
        }
    }
    getch();
    return 0;
}
