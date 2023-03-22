#include "3-calc.h"

/**
* op_mod - modulo
* @a: integer
* @b: integer
*
* Description: returns the remainder of the division
* of @a by @b
*
* Return: int
*/
int op_mod(int a, int b)
{
	return (a % b);
}

/**
* op_div - division
* @a: integer
* @b: integer
*
* Description: this divides one integer by another
*
* Return: int
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mul - multiplication
* @a: integer
* @b: integer
*
* Description: this multiplies one integer to another
*
* Return: int
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_sub - substruction
* @a: integer
* @b: integer
*
* Description: this subtructs two integers
*
* Return: int
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_add - addition
* @a: integer
* @b: integer
*
* Description: this adds two integers
*
* Return: int
*/
int op_add(int a, int b)
{
	return (a + b);
}
