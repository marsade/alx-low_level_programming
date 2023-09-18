#include "main.h"
/**
 * add - adds two numbers
 * @num1: first number
 * @num2: second number
 * Return: sum
 */
int add(int num1, int num2)
{
	return (num1 + num2);
}
/**
 * sub - subtracts two numbers
 * @num1: first number
 * @num2: second number
 * Return: result of subtraction
 */
int sub(int num1, int num2)
{
	return (num1 - num2);
}
/**
 * mul - multiplies two numbers
 * @num1: first number
 * @num2: second number
 * Return: the multiplication
 */
int mul(int num1, int num2)
{
	int i;

	i = num1 * num2;
	return (i);
}
/**
 * div - divides two numbers
 * @num1: first number
 * @num2: second number
 * Return: the division
 */
int div(int num1, int num2)
{
	return (num1 / num2);
}
/**
 * mod - finds the modulus
 * @num1: first number
 * @num2: second number
 * Return: the modulus
 */
int mod(int num1, int num2)
{
	return (num1 % num2);
}
