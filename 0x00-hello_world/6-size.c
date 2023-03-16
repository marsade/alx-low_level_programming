#include <stdio.h>
/**
 * main - A function that prints thesize of various data types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %ld byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %ld byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
