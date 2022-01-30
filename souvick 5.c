#include<stdio.h>
#include<conio.h>
 void main()
 {
     int x[10];
     int i;
     printf("Enter the elements in array");
     for(i=0;i<10;i=i+1)
     {
         scanf("%d",&x[i]);
     }
     int s=x[0],p=x[0];
     for(i=1;i<10;i++)
     {
         if(s<x[i])
         {
             s=x[i];
         }
         //else
            //continue;
     }
     printf("max=%d",s);
     for(i=1;i<10;i++)
     {
         if(p<1/x[i])
         {
             p=1/x[i];
         }
         //else
            //continue;
     }

     printf("min=%d",p);
     getch();
 }

