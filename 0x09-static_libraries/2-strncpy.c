#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: buffer storing the string copy
 * @src:the sorce string
 * @n: max number of bytes copied
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
