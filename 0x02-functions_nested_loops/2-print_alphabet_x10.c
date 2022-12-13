#include "main.h"
/**
 * print_alphabet_x10 - printing the alphabets 10 times over
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int t = 0;

	char letter;

	while (t++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
