#include "main.h"
/**
* main - is_lower - checks for lowercase character
* Return: (0) true or (1) false
*/
int main(void)
{
int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');

return (0);
}
