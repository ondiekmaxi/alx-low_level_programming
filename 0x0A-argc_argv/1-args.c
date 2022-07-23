#include <stdio.h>
/**
 * main - write a programme that prints the number of arguements passed into it
 *
 * @args: arguement count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
