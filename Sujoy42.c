#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,l,a,b,m,n;
    printf("Enter Row Number:");
    scanf("%d",&m);
    printf("Enter Column Number:");
    scanf("%d",&n);
    int x[m][n],y[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter Row %d Column %d:",i+1,j+1);
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<m;k++)
            {
                for(l=0;l<n;l++)
                {
                    for(a=1;a<m;a++)
                    {
                        for(b=1;b<n;b++)
                        {
                            //v:
                            if(x[k][l]>x[a][b])
                            {
                                y[i][j]=x[k][l];
                                //continue;
                            }
                            else
                            {
                                y[i][j]=NULL;
                                break;
                                /*a++;
                                b++;
                                goto v;*/
                            }
                        }
                    }
                }
            }
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}
