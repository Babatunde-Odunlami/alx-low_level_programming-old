#include "main.h"

/**
 * main - print the alphabets in lowercase and newline
 * code by Babatunde
 * Return: 0
 */

void print_alphabet(void);
{
	char letter = 97;

	while (letter < 123)
	{
		_putchar("%s", letter);
		letter++;
	}
	_putchar('\n');
	return (0);
}
