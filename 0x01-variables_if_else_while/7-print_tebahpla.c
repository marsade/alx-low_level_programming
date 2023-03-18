#include <stdio.h>
/**
 * main - This function prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 'z'; num >= 'a'; num--)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
