#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of chars
 * @size: size of array
 * @c: char to initialize array with
 *
 * Return: NULL if fails
 * pointer to array
 *
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malooc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size, i++)
	{
		arr[i] = c;
	}

	return (arr);
}
