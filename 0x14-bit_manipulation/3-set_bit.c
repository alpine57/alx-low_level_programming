#include "main.h"

/**
 * set_bit - gets bit of  index
 * @n: bit to be set to 1
 * @index:where the bit is taken
 * Return: return -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	else
	{
		(*n |= 1 << index);

		return (1);
	}
}
