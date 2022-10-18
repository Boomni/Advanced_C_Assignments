#include <stdio.h>

int getnumber();

/**
 * main - checks whether a given number is perfect or not
 *
 * Return: 0
 */
int main(void)
{
	int input = 0;
	int sum = 0;
	int i = 0;

	input = getnumber();

	while (!((input > 0) && (input <= 220)))
	{
		if (input < i)
			printf("Invalid Input\n");
		else
			printf("Number out of range\n");
		input = getnumber();
	}
	for(i = 1; i <= input; i++)
	{
        /* If i is a divisor of input */
		if(input%i == 0)
		{
			sum += i;
		}
	}
	/* Check whether the sum of proper divisors is equal to num */
	if(sum / 2 == input) /* or if (sum == input) */
	{
		printf("Yes, entered number is perfect number\n");
	}
	else
	{
		printf("No, entered number is not a perfect number\n");
	}
	return 0;
}

int getnumber()
{    
	int number;

	printf("Enter a number: ");
	scanf("%d", &number);
	return (number);
}


