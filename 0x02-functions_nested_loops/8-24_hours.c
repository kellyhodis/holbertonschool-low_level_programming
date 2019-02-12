#include "holberton.h"
/**
* jack_bauer - prints every minute of the day of Jack Bauer
*/
void jack_bauer(void)
{
	int min2, min1, hour2, hour1 = 0, limit;

	while (hour1 <= 2)
	{
		hour2 = 0;
		if (hour1 == 2)
			limit = 4;
		else
			limit = 10;
		while (hour2 < limit)
		{
			min1 = 0;
			while (min1 < 6)
			{
				min2 = 0;
				while (min2 <= 9)
				{
				_putchar('0' + hour1);
				_putchar('0' + hour2);
				_putchar(':');
				_putchar('0' + min1);
				_putchar('0' + min2);
				_putchar('\n');
				min2++;
				}
				min1++;
			}
			hour2++;
		}
		hour1++;
	}
}
