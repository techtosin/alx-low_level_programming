#include "holberton.h"
#include "math.h"

/**
 * pow_recursion - return power
 * @x: input x value
 * @y: input y value
 *
 * Description: returns the value of x raised
 * to the power of y
 * Returns: returns the value of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x *= _pow_recursion(x, y - 1));
}
