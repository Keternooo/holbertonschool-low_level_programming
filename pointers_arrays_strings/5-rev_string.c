#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	char strRev = '';
	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		strRev += s[j];
	}
}
