#include <stdio.h>
#include <time.h>
/**
 * main - initiating betty
 *
 * Description: main
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else ifi (n == 0)
		printf("%d is zero\n", n);
	else
		ptintf("%d is negative\n", n);
	return (0);
}
