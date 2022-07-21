#include "main.h"
/**
 * helperFunction - checks if sqrt of the number exists
 * @num: number
 * psqrt: possible sqrt of a number
 *
 * Return: sqrt of number or -1 for error
 */
int helperFunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (helperFunction(num, pSqrt + 1));
	}
}
/**
 * _sqrt_recursion - returns rhe natural square root of a number
 * @n: number
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));
}
