#include "main.h"
int second_prime_func(int n, int i);
/**
* is_prime_number - checks if an integer is a prime number or not
* @n: number
* Return: 1 if n is a prime number, 0 if not
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (second_prime_func(n, n - 1));
}
/**
* second_prime_func - uses recursion to calculate prime
* @n: number
* @i: iterator
* Return: 1 if n is prime, 0 if not
*/
int second_prime_func(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (second_prime_func(n, i - 1));
}
