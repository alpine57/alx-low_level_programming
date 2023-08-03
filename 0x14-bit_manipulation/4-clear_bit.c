#include "main.h"
/**
 * clear_bit - set value of  given bit to 0
 * @n: pointer to  no to change
 * @index: index of  bit to be cleared.
 * Return: 1 succes.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)

	return (-1);

	*n = (~(1UL << index) & *n);

	return (1);

}
