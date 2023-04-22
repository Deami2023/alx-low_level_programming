#include <stdio.h>

/**
 * main - prints comb of numbers.
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
