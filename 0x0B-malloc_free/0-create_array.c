#include "main.h"
#include<stdlib.h>

/*
**create_array:  creates an array of chars, and initializes it with a specific.
*Size:Size of an array.
*C: Char to assign.
*Description:function that creates an array,initializes a specific char.
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int y;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
	return (0);

	for (y = 0; y < size; y++)
	ptr[y] = c;
	return (ptr);
}
