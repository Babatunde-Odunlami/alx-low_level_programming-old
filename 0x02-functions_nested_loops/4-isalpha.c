#include "main.h"
/**
 * _isalpha - check if a char is a letter regardless of case
 * @c: is the char to be checked int
 * code by Babatunde
 * Return: 1 if is a letter, otherwise 0.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
