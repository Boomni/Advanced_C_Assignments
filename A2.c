#include <stdio.h>

int getnumber();

/**
 * main - generates fibonacci numbers lessthan or equals to 'n'
 *
 * Return: 0
 */
int main(void)
{
	int input = 0;
	int n1 = 0, n2 = 1, n3;
	int i = 0;

	input = getnumber();
	for (i = 0; i <= input; i++)
	{
		n3 = n1 + n2;
		if (n3 <= input)
			printf("%d, ", n3);
	}
	putchar('\n');
	return 0;
}

int getnumber()
{    
	int number;

	printf("Enter a number: ");
	scanf("%d", &number);
	return (number);
}


