#include "main.h"

/**
 * _abs - main code
 * @n: this is the number which has its absolute 
 * number printed
 *
 * Description: this returns the absolute number
 * of the input @n 
 *
 * Return: int
 */

int print_sign(int n)
{
	int result;

	if (n >= 0)
	{
		result = n;
	}
	else
	{
		result = n * -1;
	}

	return (result);
}
