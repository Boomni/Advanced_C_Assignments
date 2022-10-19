#include <stdio.h>

int getnumber(void);

/**
 * main - checks whether a given number is perfect or not
 *
 * Return: 0
 */
int main(void)
{
	int N = 0;
	int sum = 0;
	int i = 0;

	N = getnumber();

	while (!((N > 0) && (N <= 220)))
	{
		if (i > N)
			printf("Invalid Input\n");
		else
			printf("Number out of range\n");
			return (0);
	}
	for (i = 1; i <= N; i++)
	{
		/* If i is a divisor of N */
		if (N % i == 0)
		{
			sum += i;
		}
	}
	if (sum / 2 == N)
	{
		printf("Yes, entered number is perfect number\n");
	}
	else
	{
		printf("No, entered number is not a perfect number\n");
	}
	return (0);
}
/**
 * getnumber - gets the input number from users
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
