#include <stdio.h>

int getnumber(void);

/**
 * main - generates fibonacci numbers lessthan or equals to 'n'
 *
 * Return: 0
 */
int main(void)
{
	int N = 0;
	int n1 = 0, n2 = 1, n3;
	int i = 0;

	N = getnumber();
	for (i = 0; i <= N; i++)
	{
		if (n1 < N)
		{
			printf("%d", n1);
			n3 = n1 + n2;
			n1 = n2;
			n2 = n3;
		}
	}
	putchar('\n');
	return (0);
}
/**
 * getnumber - gets input from user
 *
 * Return: number inputed
 */
int getnumber(void)
{
	int number;

	printf("Enter a number: ");
	scanf("%d", &number);
	return (number);
}


