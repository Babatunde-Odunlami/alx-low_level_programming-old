i#include <stdlib.h>
#include <stdio.h>
/**
 * main - print the combination of single numbers
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	i = 48;
	j = 48;


	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			putchar(i);
			putchar(j);
			if (i < 56 || j < 57)
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}
		i++;
	}
	putchar(10);
	return (0);
}
