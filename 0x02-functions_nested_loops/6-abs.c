#include "main.h"
/**
 * _abs - computes the absolute value
 * of an integer.
 *
 * @i: input numer as an integer.
 * Return: Absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
