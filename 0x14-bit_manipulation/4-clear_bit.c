#include "main.h"
/**
 * clear_bit - sets value of  given bits.
 * @n: pointer to the number to change.
 * @index: indexof bet that is to be cleared.
 * Return: 1 succes.s
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
        if (index > 63)
                return (-1);
        *n = (~(1UL << index) & *n);
        return (1);
}
