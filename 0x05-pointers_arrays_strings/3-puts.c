#include "main.h"

/**
 * _puts - prints a string and a new line to standard output.
 * @str: input string
 * Return: void.
 */
void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] != '\0')
		{
			puts(str[count]);
			count++;
		} else
		{
			count = -1;
			_putchar('\n');
		}
	}
}
