#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n,i=0,l=0,c,p,i1=0,n1,p1,c1,r1;
    printf("INPUT:\n1. Binary\n2. Octal\n3. Decimal\n4. Hexa Decimal\n");
    v1:
    printf("Choose:");
    scanf("%d",&c1);
    switch(c1)
    {
        case 1:p1=2;
        break;
        case 2:p1=8;
        break;
        case 3:p1=10;
        break;
        case 4:p1=16;
        break;
        default:printf("\nWrong Input!\n\n");
        goto v1;
        break;
    }
    printf("Enter Number:");
    scanf("%d",&n1);
    while(n1>0)
    {
        r1=n1%10;
        n=n+r1*pow(p1,i1);
        n1=n1/10;
        i1++;
    }
    printf("CONVERT INTO:\n1. Binary\n2. Octal\n3. Decimal\n4. Hexa Decimal\n");
    v:
    printf("Choose:");
    scanf("%d",&c);
    switch(c)
    {
        case 1:p=2;
        break;
        case 2:p=8;
        break;
        case 3:p=10;
        break;
        case 4:p=16;
        break;
        default:printf("\nWrong Input!\n\n");
        goto v;
        break;
    }
    int r[n];
    while(n>0)
    {
        r[i]=n%p;
        n=n/p;
        i++;
        l++;
    }
    printf("ANSWER:");
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
