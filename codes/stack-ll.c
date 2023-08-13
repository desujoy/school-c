#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define MAX 10

struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
node *root=NULL;
int top=-1;

void push();
void pop();
void display();

void main()
{
    int ch;
    node *ptr;
    while(1)
    {
        printf("Press \n1. For push an element into Stack\n2. For pop an element from the Stack\n3. Display the elements in the Stack\n0. Exit the program\nEnter your choice:");
        scanf("%d",&ch);
        if(ch==1)
            push();
        else if(ch==2)
            pop();
        else if(ch==3)
        {
            ptr=root;
            printf("\nThe Stack contains:\n\n");
            display(ptr);
        }
        else
            exit(0);
    }
}

void push()
{
    node *ptr,*temp;
    int n,i;
    printf("\nHow many elements do you want to enter?:");
    scanf("%d",&n);
    if(top==MAX-1)
    {
        printf("Stack Overflow\n");
        return;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            top++;
            temp=(node*)malloc(sizeof(struct node));
            printf("\nEnter Data:");
            scanf("%d",&temp->data);
            temp->next=NULL;
            if(root==NULL)
                root=temp;
            else
            {
                ptr=root;
                while(ptr->next!=NULL)
                    ptr=ptr->next;
                ptr->next=temp;
            }
        }
    }
}

void pop()
{
    node *ptr,*ptr1;
    if(top==-1)
    {
        printf("Stack Underflow\n");
        return;
    }
    else
    {
        ptr=root;
        while(ptr->next!=NULL)
        {
            ptr1=ptr;
            ptr=ptr->next;
        }
        if(ptr==root)
        {
            root=NULL;
            printf("POP successful\n");
            top--;
            return;
        }
        ptr1->next=NULL;
        free(ptr);
        printf("POP successful\n");
        top--;
    }
}

void display(node *ptr)
{
    if(ptr==NULL)
    {
        printf("The Stack is empty\n");
        return;
    }
    if(ptr->next==NULL)
    {
        printf("%d\n",ptr->data);
        return;
    }
    display(ptr->next);
    printf("%d\n",ptr->data);
}