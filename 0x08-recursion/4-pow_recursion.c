#include "main.h"
/**
* _pow_recursion - returns the value of x raised to the power y
* @x: base number
* @y: power number
* Return: x raised to power y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (x == 1)
		return (1);
	x = x * _pow_recursion(x, y - 1);
	return (x);
}
