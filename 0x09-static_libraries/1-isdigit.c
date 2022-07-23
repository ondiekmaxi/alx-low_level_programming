#include "main.h"

/**
 * _isdigit - function that verifies if a character is a digit or not
 * c: tested character
 * Return: returns 1 if it is a digit or 0 if is not
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
