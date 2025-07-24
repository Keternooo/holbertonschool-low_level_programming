#include "main.h"

/**
 *  _strcpy - funciton that copies the string to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by des.
 * @dest: the pointer to return value
 * @src: the string to copie
 * Return: the pointer with char
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
