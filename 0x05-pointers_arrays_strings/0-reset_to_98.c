#include <main.h>
/**
 * reset_to_98 - function to reset the value of n
 * @n: variable to be checked
 * code by Babatunde
*/

void reset_to_98(int *n)
{
	int n;
	int *ptr_n = &n;

	ptr_n = 98;

	_putchar("%d\n", *&n);
	return (0);
}

