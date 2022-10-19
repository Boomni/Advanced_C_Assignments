#include <stdio.h>

int get_input(void);

/**
 * main - prints "Hello" in X format
 *
 * Return: 0
 */
int main(void)
{
	int i, j, N;

	N = get_input();

	if (N > 24 || N < 1)
	{
		printf("%s", "Number out of range\n");
		return (0);
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (i == j || i + j == N - 1)
			{
				printf("%s", "Hello");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return (0);
}
int get_input(void)
{
	int number = 0;

	printf("Enter a number of lines: ");
	scanf("%d", &number);
	return (number);
}

