#include <stdio.h>
#include <stdlib.h>

/**
* main - program that prints all arguments it receives
* @argc : Count tab
* @argv : Values of tab
* Return: Always (Success)
*/

int main(int argc, char *argv[])

{
int i;

for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
return (0);
}
