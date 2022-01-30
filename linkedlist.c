#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node node;
node *root = NULL;
void create()
{
	node *ptr, *temp;
	ptr = root;
	temp = (node *)malloc(sizeof(struct node));
	printf("\nEnter node data : ");
	scanf("%d", &temp->data);
	temp->next = NULL;
	if (root == NULL)
	{
		root = temp;
		return;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
}
void display()
{
	node *ptr;
	ptr = root;
	if (ptr == NULL)
	{
		printf("\nThe Linked list is empty\n");
		return;
	}
	else
	{
		printf("\nThe list look like.......\n\n");
		while (ptr != NULL)
		{
			printf("%d ", ptr->data);
			ptr = ptr->next;
		}
	}
}
void ins_first()
{
	node *ptr, *temp;
	ptr = root;
	temp = (node *)malloc(sizeof(struct node));
	printf("\nEnter node data : ");
	scanf("%d", &temp->data);
	temp->next = NULL;
	if (root == NULL)
	{
		root = temp;
		return;
	}
	else
	{
		temp->next = ptr;
		root = temp;
	}
}
void ins_any_position()
{
	node *ptr, *temp;
	int i, n;
	ptr = root;
	printf("\nEnter the position where to be insert: ");
	scanf("%d", &n);
	for (i = 1; i < n - 1; i++)
	{
		ptr = ptr->next;
	}
	if (ptr == NULL)
	{
		printf("\nInvalid input");
		return;
	}
	temp = (node *)malloc(sizeof(struct node));
	printf("\nEnter node data : ");
	scanf("%d", &temp->data);
	temp->next = NULL;
	temp->next = ptr->next;
	ptr->next = temp;
}
void del()
{
	node *ptr, *ptr1;
	ptr = root;
	if (ptr == NULL)
	{
		printf("\n There is no node\n");
		return;
	}
	else
	{
		ptr1 = ptr;
		ptr = ptr->next;
		root = ptr;
		free(ptr1);
		printf("\n Deletion is Successful\n");
	}
}
void del_last()
{
	node *ptr, *ptr1;
	ptr = root;
	if (ptr == NULL)
	{
		printf("\n There is no node\n");
		return;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr1 = ptr;
			ptr = ptr->next;
		}
		ptr1->next = NULL;
		free(ptr);
		printf("\n Deletion is Successful\n");
	}
}
void del_any_position()
{
	node *ptr, *ptr1;
	int i, n;
	ptr = root;
	printf("\nEnter the position where to be delete: ");
	scanf("%d", &n);
	if (ptr == NULL)
	{
		printf("\n There is no node\n");
		return;
	}
	else if (n == 1)
	{
		ptr1 = ptr;
		ptr = ptr->next;
		root = ptr;
		free(ptr1);
		printf("\n Deletion is Successful\n");
	}
	else
	{
		for (i = 1; i <= n - 1; i++)
		{
			ptr1 = ptr;
			ptr = ptr->next;
		}
		ptr1->next = ptr->next;
		ptr->next = NULL;
		free(ptr);
		printf("\n Deletion is Successful\n");
	}
}
void del_by_item()
{
	node *ptr, *ptr1;
	int item;
	int flag = 0;
	printf("Enter item, which to be delete");
	scanf("%d", &item);
	ptr = root;
	while (ptr != NULL)
	{
		if (ptr->data == item && ptr == root)
		{
			ptr1 = ptr;
			ptr = ptr->next;
			root = ptr;
			free(ptr1);
			flag = 1;
			printf("\n Delete successfull");
			return;
		}
		else if (ptr->data == item && ptr != root)
		{
			ptr1->next = ptr->next;
			ptr->next = NULL;
			free(ptr);
			flag = 1;
			printf("\n Delete successfull");
			return;
		}
		ptr1 = ptr;
		ptr = ptr->next;
	}
	if (flag == 0)
	{
		printf("\nItem not found");
	}
}
void main()
{
	int ch;
	while (1)
	{
		printf("\npress 1 for create linked list: ");
		printf("\npress 2 for display linked list: ");
		printf("\npress 3 for insert node at first position of linked list: ");
		printf("\npress 4 for insert node at any position of linked list: ");
		printf("\npress 5 for Delete a node of linked list: ");
		printf("\npress 6 for Delete the last node of linked list: ");
		printf("\npress 7 for Delete at any position of node of linked list: ");
		printf("\npress 8 for Delete node by data of linked list: ");
		printf("\npress 9 for exit \n\n ");
		printf("\n Enter your choice: ");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			create();
			break;
		case 2:
			display();
			break;
		case 3:
			ins_first();
			break;
		case 4:
			ins_any_position();
			break;
		case 5:
			del();
			break;
		case 6:
			del_last();
			break;
		case 7:
			del_any_position();
			break;
		case 8:
			del_by_item();
			break;
		case 9:
			exit(0);
		default:
			printf("\n wrong choice...\n");
			break;
		}
	}
}