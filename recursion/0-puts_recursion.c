#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s : String
 * Return: A pointer to the destination string (dest).
 */

void _puts_recursion(char *s)

{

int i = 0;

if (*s == '\0')
	{
	_putchar('\n');
	return;
	}
_putchar(s[i]);
_puts_recursion(s + 1);

}
