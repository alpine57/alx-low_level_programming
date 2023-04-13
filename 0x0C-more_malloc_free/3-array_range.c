#include "main.h"
#include<stdlib.h>

/**
*array_range- creates an array of integers.
*@min: minimum value
*@max : maximum value.
*Return: the pointer to the newly created array
*/
int *array_range(int min, int max)

{
	int *l;
	int x;

	if (min > max)
	return (NULL);

	l = malloc(sizeof(l) * ((max - min) + 1));

	if (l == NULL)
	return (NULL);

	for (x = 0 ; min <= max ; x++, min++)
	l[x] = min;

	return (l);
}
