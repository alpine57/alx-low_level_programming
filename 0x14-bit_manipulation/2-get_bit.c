#include "main.h"
/**
 * get_bit - gets bit of index
 * @n:   the bit
 * @index: where bit is taken
 * Return:-1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	else
	{
		return ((n >> index) & 1);
	}
}
