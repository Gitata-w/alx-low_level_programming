#include "main.h"

/**
* rev_string  - string in reverse
*
*@s: pointer
*Return: 0
*/
void rev_string(char *s)
{
	int len, i, half;
	char t;

	for (len = 0; s[len] != '\0'; len++)

	i = 0;

	half = len / 2;

	while (half--)
	{
		t = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = t;
		i++;
	}
}
