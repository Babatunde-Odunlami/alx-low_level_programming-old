#include "main.h"
/**
 * jack_bauer - Print every minute of the day
 * jacker bauer, starting from 00:00 to 23:59.
 * code by Babatunde
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 59; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}