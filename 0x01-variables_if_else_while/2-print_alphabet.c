#include <stdio.h>

/**
*main - The alphabet in lowercase
*
*Description: Putchar as the function that prints the alphabet in lowercase
*then adds a new line
*Return: 0
*/

int main(void)
{
	char alp = 'a';

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');

	return (0);
}
