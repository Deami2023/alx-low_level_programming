#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %d 1 byte(s)", sizeof(char));
	printf("Size of an int: %d 4 byte(s)", sizeof(int));
	printf("Size of a long int: %d 4 byte(s)", sizeof(long int));
	printf("Size of a long long int: %d 8 byte(s)", sizeof(long long int));
	printf("Size of a float: %d 4 byte(s)", sizeof(float));
	return (0);
}
