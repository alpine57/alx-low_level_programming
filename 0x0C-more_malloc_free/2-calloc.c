#include "main.h"
#include<stdlib.h>

/**
*_calloc- allocates memory for an array, using malloc.
*@nmemb:no of elements.
*@size: size of memory to be allocated.
*Return:pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)

{
	char *x;
	unsigned int y;

	if (nmemb == 0 || size == 0)
	return (NULL)

	x = malloc(nmemb * size);

	if (x == NULL)
	return (NULL);

	for (y = 0; y < (nmemb * size); y++)
	p[y] = 0;

	return (p);
}
