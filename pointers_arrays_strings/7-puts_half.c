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

	if (len % 2 == 0)
	{
		midLen = len / 2;
	}
	else
	{
		midLen = (len + 1) / 2;
	}

	for (j = midLen; j < len; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
