#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform the operation
 *               asked by the user.
 * @s: The operator passed as argument.
 *
 * Return: A pointer to the function that corresponds to the operator
 *         given as a parameter, or NULL if no match is found.
 */
int (*get_op_func(char *s))(int, int)
{

int i = 0;

op_t ops[] = {

{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

	while ((ops[i].op) != NULL)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}
return (NULL);
}
