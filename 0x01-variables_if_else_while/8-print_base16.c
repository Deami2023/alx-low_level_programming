#include <stdio.h>

/**
 * main - prints numbers of base 16.
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int m;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (m = 97; m <= 102; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
