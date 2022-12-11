#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the alphabets in lower and upper case
 *
 * Return: 0
*/
int main(void)
{
	int i = 97;
	int j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	while (j < 91)
	{
		putchar(j);
		j++;
	}
	putchar(10);
	return (0);
}
