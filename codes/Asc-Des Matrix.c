#include <stdio.h>
#include<conio.h>
int main()
{
    int temp, t, i, j,r,c;
    printf("Enter Row Number:");
	scanf("%d",&r);
	printf("Enter Column Number:");
	scanf("%d",&c);
	int x[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter Row %d Column %d:",i+1,j+1);
			scanf("%d",&x[i][j]);
		}
	}

    for(t=1; t<(r*c); t++)
    {
        for(i=0; i<r; i++)
        {
            for(j=0; j<c-1; j++)
            {
                if (x[i][j]>x[i][j+1])
                {
                    temp=x[i][j];
                    x[i][j]=x[i][j+1];
                    x[i][j+1]=temp;
                }
            }
        }
        for(i=0; i<r-1; i++)
        {
            if (x[i][c-1]>x[i+1][0])
            {
                temp=x[i][c-1];
                x[i][c-1]=x[i+1][0];
                x[i+1][0]=temp;
            }
        }
    }
    printf("Sorting Ascending Order:\n");
    for(i=0; i<r; i++)
    {
        printf("\n");
        for(j=0; j<c; j++)
            printf("%d\t", x[i][j]);
    }
        for(t=1; t<(r*c); t++)
    {
        for(i=0; i<r; i++)
        {
            for(j=0; j<c-1; j++)
            {
                if (x[i][j]<x[i][j+1])
                {
                    temp=x[i][j];
                    x[i][j]=x[i][j+1];
                    x[i][j+1]=temp;
                }
            }
        }
        for(i=0; i<r-1; i++)
        {
            if (x[i][c-1]<x[i+1][0])
            {
                temp=x[i][c-1];
                x[i][c-1]=x[i+1][0];
                x[i+1][0]=temp;
            }
        }
    }
    printf("\nSorting Descending Order:\n");
    for(i=0; i<r; i++)
    {
        printf("\n");
        for(j=0; j<c; j++)
            printf("%d\t", x[i][j]);
    }
    getch();
    return 0;
}
