#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all arguments it receives
 * @argc :
 * @argv :
 * Return: Always (Success)
 */

int main(int argc, char *argv[])

{
int a;
int b;
int result;

	if (argc != 3)
	{
		printf("Error\n");
			return (1);
	}

a = atoi(argv[1]);
b = atoi(argv[2]);

result = a *b;
	printf("%d\n", result);
			return (0);
}
