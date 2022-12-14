#include <stdio.h>
/**
 * main - prints the first 5o fibonacci nums starting with 1 and 2
 * sepereated by comma
 * Return: 0
 */

int main(void)
{
	int cnt;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (cnt = 0; cnt < 50; cnt++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (cnt == 40)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
