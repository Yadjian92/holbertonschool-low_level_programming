#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts the second integer from the first.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of a - b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides the first integer by the second.
 * @a: The first integer (dividend).
 * @b: The second integer (divisor).
 *
 * Return: The result of a / b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
			exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Computes the remainder of the division of two integers.
 * @a: The first integer (dividend).
 * @b: The second integer (divisor).
 *
 * Return: The remainder of a / b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
			exit(100);
	}
	return (a % b);
}
