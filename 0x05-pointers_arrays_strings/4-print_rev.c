#include "main.h"

/**
* print_rev - prints the string in reverse with a new line
*
*@s: pointer to the string to print
*Return: 0
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
