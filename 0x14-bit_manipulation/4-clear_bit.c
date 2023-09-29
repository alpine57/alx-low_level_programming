#include "main.h"
/**
 * clear_bit - gets the bit of index
 * @n: bit to be set to zero
 * @index: wherebit is taken and set to zero
 * Return: return -1 
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
	return (-1);
	}

	else
	{
		*n &= ~(1 << index);
		return (1);
	}
}
