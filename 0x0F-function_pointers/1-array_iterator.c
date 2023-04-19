#include "function_pointers.h"
#include<stdio.h>

/**
*array_iterator - prints array element.
*@array:array.
*@size:elements to print.
*@action: action to be done.
*/
void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int x;


	if (array == NULL || action == NULL)
	return;
	for (x = 0; x < size; x++)
	{
	action(array[x]);
	}
}
