#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* num_check - check if the string is a digit
* @strn: string to be checked
* Return: 0
*/
int num_check(char *strn)
{
	unsigned int count;

	count = 0;
	while (count < strlen(strn))
	{
		if (!isdigit(strn[count]))
			return (0);
		count++;
	}
	return (1);
}
/**
* main - adds positive numbers
* @argc: argument count
* @argv: argument vector
* Return: 0
*/
int main(int argc, __attribute__((unused))char *argv[])
{
	int i, chg_str, sum = 0;

	i = 1;
	while (i < argc)
	{
		if (num_check(argv[i]))
		{
			chg_str = atoi(argv[i]);
			sum += chg_str;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
