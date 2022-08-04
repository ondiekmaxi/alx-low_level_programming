#include "functon_pointers.h"

/**
 * print_name - prints a name
 * @name: input name
 * @f: function poiter
 *
 * Return: no return
 */
void print_name(char *name, void(*f)(char *))
{
	if (name && f)
		f(name);
}
