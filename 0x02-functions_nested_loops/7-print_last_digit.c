#include "main.h"

/**
*print_last_digit - function for printing the last digit
*@num: no in question
*Return: 0
*/
int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
		_putchar(last_digit + '0');
	}
	return (last_digit);
}
