#include "main.h"
#include<stdlib.h>
#include<limits.h>

/**
*malloc_checked- allocates memory using malloc.
*
*@b- bytes allocated.
*Return: pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
	exit(98);
	return (p);
}
