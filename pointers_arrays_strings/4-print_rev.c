#include "main.h"

/**
 * print_rev - function that prints a string, in reverse, followed by a new line.
 * @s: the string to evaluate
 */

void print_rev(char *s)
{
	int i = 0;
	while(s[i] != '\0')
	{
		i++;
	}
	for(int j = i-1; s[j] != '\0'; j--)
	{
		_putchar(s[j])
	}
	_putchar('\n')
}
