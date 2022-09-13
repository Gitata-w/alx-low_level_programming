#include <stdio.h>

/**
*main - Entry point
*
*Description: Print alphabet first lower case then uppercase
*Return: 0
*/

int main(void)
{
	char lower;
	char upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
	putchar('\n');

	return (0);
}
