#include <stdio.h>
/**
 * main - Print th alphabet with for loop
 *
 * Return: Always (Success)
 */
	int main(void)
{

	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{
	putchar(alphabet);
}
	for (alphabet = 'A'; alphabet <= 'Z' ; alphabet++)

	putchar(alphabet);

	putchar('\n');
	return (0);
}
