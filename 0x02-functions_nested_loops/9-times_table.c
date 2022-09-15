#include "main.h"

/**
 * times_table - function that prints times table
 * Return: 0
 */

void times_table(void)
{

	int a = 0;
	int b;
	int t;

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			t = a * b;
			if (b == 0)
		{
			_putchar('0' + t);
		}
		else if (t < 10)
		{
			_putchar(' ');
			_putchar('0' + t);
		}
		else
		{
			_putchar('0' + t / 10);
			_putchar('0' + t % 10);
		}

		if (b < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		b++;
	}
	_putchar('\n');
	a++;
}
}
