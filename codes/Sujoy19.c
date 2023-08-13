//Find Sides of Triangle from Perimeter
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,c,n,nbt;
    printf("Enter The Perimeter of Triangle:");
    scanf("%d",&n);
    printf("All Possible Combination are...\n");
    nbt=(int)ceil((double)n/2);
    for(a=1;a<nbt;a++)
    {
        for(b=1;b<nbt;b++)
        {
            c=n-(a+b);
            if(c<a+b)
            {
                if((a+c)!=b)
                    printf("%d\t%d\t%d\n",a,b,c);
            }
        }
    }
    getch();
    return 0;
}
