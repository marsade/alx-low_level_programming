#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main- main function
 * @argc: number of arguments
 * @argv: argument vectors array
 * Return: Always 0
*/
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(operator) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operator == '/' && num2 == 0) || (*operator == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(operator)(num1, num2));
	return (0);
}
