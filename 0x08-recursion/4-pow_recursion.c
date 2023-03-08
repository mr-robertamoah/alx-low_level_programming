#include "main.h"

/**
 * _pow_recursion - power
 * @x: integer
 * @y: integer
 *
 * Description: find the power of x to y
 *
 * Return: returns int
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, y - 1));
}
