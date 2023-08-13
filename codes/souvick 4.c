#include<stdio.h>
#include<conio.h>
#include<math.h>
 void main()
 {
     int n,r,i,nl,s=0;
     printf("enter the length");
     scanf("%d",&nl);
     printf("Enter the number");
     scanf("%d",&n);
     for(i=1;i<=nl;i++)
     {
         r=n%10;
         s=s*10+r
         ;
         n=(n-r)/10;
     }
     printf("%d",s);
     getch();
 }
