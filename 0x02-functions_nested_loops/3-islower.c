#include "main.h"
/**
 * _islower - check if the alphabet is a lower character
 * @c: is the char to be checked
 * code by Babatunde
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
