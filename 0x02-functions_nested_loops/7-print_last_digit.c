#include "main.h"

/**
*print_last_digit - function for printing the last digit
*@num: no in question
*Return: 0
*/
int print_last_digit(int num)
{
	int last;

	last  = num % 10;

	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
