#include <stdlib.h>
#include <stdio.h>
/**
 * main - print the combination of two-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k, m;

	i = 48;

	while (i < 58)
	{
		j = 48;

		while (j < 58)
		{
			m = j + i;

			k = i;

			while (k < 58)
			{
				while (m < 58)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(m);
					putchar(k);
					if (i < 57 || j < 56 || k < 57 || m < 57)
					{
						putchar(44);
						putchar(32);
					}
					k++;
				}
				m = 48;
				m++;
			}
			j++;
		}
		i++;
	}
	putchar(10);
	return (0);
}

