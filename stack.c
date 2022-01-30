#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#define MAX 50
int stack[MAX],top; 
void display(); /* display stack element*/
void push(int data); /* push item into stack*/
void pop(); /* pop (remove) item from stack*/
void main()
{
 int item=0;
 int choice=0;
 top=-1;
 while(1)
 {
 printf("\nEnter Choice \n1: display \n2: insert (PUSH) \n3: remove(POP)), \n4: Exit..:");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
 display();
 break;
 case 2:
 printf("Enter Item to be insert :");
 scanf("%d",&item);
 push(item);
 break;
 case 3:
 pop();
 break;
 case 4:
 exit(0);
 default:
 printf("\nInvalid choice.");
 break;
 }
 // getch();
 }// end of while(1)
}
/* function : display(),to display stack elements.*/
void display()
{
 int i=0;
 if(top==-1)
 {
 printf("Stack is Empty .\n");
 return;
 }
 printf("%d <-- TOP ",stack[top]);
 for(i=top;i>=0;i--)
 {
 printf("\n%d",stack[i]);
 }
 printf("\n\n");
}
/* function : PUSH(),to push an item into stack.*/
void push(int data) 
{
 if(top!=MAX) 
 {
 top = top + 1; 
 stack[top] = data;
 } 
 else 
 {
 printf("Could not insert data, Stack is full.\n");
 return;
 }
}
/* function : POP(),to pop an item from stack.*/
void pop() 
{
int data;
 if(top!=-1) 
 {
 data = stack[top];
 top = top - 1; 
 printf("%d pop successfully\n",data);
 } 
 else 
 {
 printf("Could not retrieve data, Stack is empty.\n");
 return;
 }
}