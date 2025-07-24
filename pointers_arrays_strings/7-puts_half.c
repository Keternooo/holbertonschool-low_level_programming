#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: string to evaluate
 */

void puts_half(char *str)
{
	int len = 0;
	int midLen;
	int j;

	while (str[len] != '\0')
	{
		len++;
	}

	midLen = len / 2;

	for (j = midLen; j < i; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n')
}
