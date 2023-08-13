#include<stdio.h>
#include<conio.h>
void main()
{
	int fact=1,sum=0,num,s,j,a,b,store,i,r;
    printf("Enter the length of the number");
	scanf("%d",&r);
	printf("Enter the number");
	scanf("%d",&num);
	s=num;
	a=num;
	for(i=0;i<=r;i++)
	{ 
		store=num%10;
		num=num/10;
	}
	 if(num==0)
	 { 
		 j=0;
		 while(j<r)
		 {
			 b=a%10;
			 a=a/10;
			 fact=1;
			 for(i=1;i<=b;i++)
			 {
				 fact=fact*i;
			 }
			 sum=sum+fact;
			 j++;
		 }
		 if(s==sum)
		 {
			 printf("The number is a krisnomurthy number");
		 }
		 else
		 {
			 printf("The number is not a krisnomurthy number");
		 }
	 }
	 else
	 {
		 printf("You have entered a wrong number");
	 }
	 getch();
}
	