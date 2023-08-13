#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void leap()
{
	int y;
	printf("Enter Year:");
	scanf("%d", &y);
	if (y % 400 == 0)
		printf("\nThe Year is Leap Year\n");
	else if (y % 100 == 0)
		printf("\nThe Year is not Leap Year\n");
	else if (y % 4 == 0)
		printf("\nThe Year is Leap Year\n");
	else
		printf("\nThe Year is not Leap Year\n");
}

void fibo()
{
	int n1 = 0, n2 = 1, n3, n, i;
	printf("Enter Fibonacci Element No.:");
	scanf("%d", &n);
	printf("%d %d", n1, n2);
	for (i = 2; i < n; ++i)
	{
		n3 = n1 + n2;
		printf(" %d", n3);
		n1 = n2;
		n2 = n3;
	}
}

void pattern()
{
	int r, c = 1, s, i, j;
	printf("Enter the number of rows: ");
	scanf("%d", &r);
	for (i = 0; i < r; i++)
	{
		for (s = 1; s <= r - i; s++)
			printf("  ");
		for (j = 0; j <= i; j++)
		{
			if (j == 0 || i == 0)
				c = 1;
			else
				c = c * (i - j + 1) / j;
			printf("%4d", c);
		}
		printf("\n");
	}
}

void array()
{
	int a[5], i, s;
	int pos = -1;
	for (i = 0; i < 5; i++)
	{
		printf("Enter number %d:", i + 1);
		scanf("%d", &a[i]);
	}
	printf("Enter the number to search for:");
	scanf("%d", &s);
	for (i = 0; i < 5; i++)
	{
		if (a[i] == s)
		{
			pos = i;
			break;
		}
	}
	if (pos == -1)
	{
		printf("%d was not found\n", s);
	}
	else
	{
		printf("%d was found at position %d\n", s, pos + 1);
	}
}

void pointer()
{
	int *pc, c;
	c = 22;
	printf("Address of c: %p\n", &c);
	printf("Value of c: %d\n\n", c);
	pc = &c;
	printf("Address of pointer pc: %p\n", pc);
	printf("Content of pointer pc: %d\n\n", *pc);
	c = 11;
	printf("Address of pointer pc: %p\n", pc);
	printf("Content of pointer pc: %d\n\n", *pc);
	*pc = 2;
	printf("Address of c: %p\n", &c);
	printf("Value of c: %d\n\n", c);
}

void main()
{
	int c = 0;
	while (1)
	{
		printf("Choose From Below:\n1. Leap Year\n2. Fibonacci Series\n3. Pattern(Pascal's Trangle)\n4. Array\n5. Pointer\n6. Exit\nEnter Choice:");
		scanf("%d", &c);
		switch (c)
		{
		case 1:
			leap();
			break;
		case 2:
			fibo();
			break;
		case 3:
			pattern();
			break;
		case 4:
			array();
			break;
		case 5:
			pointer();
			break;
		case 6:
			exit(0);
			break;
		default:
			printf("\nWrong Choice!!\n");
			break;
		}
		printf("\n");
	}
}