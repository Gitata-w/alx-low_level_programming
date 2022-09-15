#include "main.h"
/**
 * print_times_table - function that prints times table
 * @n : times table to use
 * Return: 0
 */

void print_times_table(int n)
{

	int a = 0, tbl, b;

	if (n < 0 || n > 15)
	return;

	while (a <= n)
	{
		for (b = 0; b <= n; b++)
		{
			tbl = a * b;
			if (b == 0)
			_putchar('0' + tbl);
		else if (tbl < 10)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + tbl);
		}
		else if (tbl < 100)
		{
			_putchar(' ');
			_putchar('0' + tbl / 10);
			_putchar('0' + tbl % 10);
		}
		else
		{
			_putchar('0' + tbl / 100);
			_putchar('0' + (tbl - 100) / 10);
			_putchar('0' + tbl % 10);
		}
		if (b < n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	a++;
}
}
