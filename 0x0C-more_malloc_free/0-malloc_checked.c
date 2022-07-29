#include <unistd.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b:size
 * Return: pointer to alloated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
