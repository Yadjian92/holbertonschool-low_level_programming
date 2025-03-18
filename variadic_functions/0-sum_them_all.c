#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - Sums all its parameters.
* @n: The number of arguments passed to the function.
* Return: The sum of all parameters, or 0 if n is 0.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	unsigned int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, unsigned int
		);
	}

	va_end(args);
	return (sum);
}
