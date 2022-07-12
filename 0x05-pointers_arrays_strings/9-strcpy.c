#include "main.h"

/**
 * _strcpy - copies a variable
 * @dset: this is destiny
 * @src: this is the copy
 *
 * Return: returns copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
