#include <stdio.h>

/**
*main - Entry point of the program
*
*Description: Prints numbers of base 16 in lowercase
*Return: 0
*/

int main(void)
{
	char h;

	for (h = '0'; h <= '9'; h++)
	{
		putchar(h);
	}
	for (h = 'a'; h <= 'f'; h++)
	{
		putchar(h);
	}
	putchar('\n');

	return (0);
}
