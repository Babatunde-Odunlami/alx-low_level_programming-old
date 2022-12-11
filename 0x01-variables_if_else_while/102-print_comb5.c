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

	i = 0;

	while (i < 10)
	{
		j = 0;

		while (j < 10)
		{
			k = 0;
			m = j + i;

			while (k < 9)
			{
				while (m < 9)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(m);
					if (!(i == 9 || j == 8 || k == 9 || m == 9))
					{
						putchar(' ');
						putchar(',');
					}
					m++;
				}
				m = 0;
				k++;
			}
			j++;
		}
		i++;
	}
	putchar(10);
	return (0);
}

