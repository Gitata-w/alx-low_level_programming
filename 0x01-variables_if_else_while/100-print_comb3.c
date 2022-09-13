#include <stdio.h>

/**
*main - Entry point for the program
*
*Description: Prints all possible combination of two digits
*Return: 0
*/

int main(void)
{
	int c, h;

	c = h = '0';

	for (c = '0'; c <= '9'; c++)
	{
		for (h = '0'; h <= '9'; h++)
		{
			putchar(c);
			putchar(h);

			if ((c != '9') || (c == '9' && h != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
