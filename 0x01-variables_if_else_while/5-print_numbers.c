#include <stdio.h>

/**
*main - Entry point of program
*
*Description: Prints all single digit numbers of base 10
*Return: 0
*/

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
