#include "main.h"
#include<stdlib.h>
#include<stdio.h>

/*
*_strdup()-Returns pointer to  new string which  duplicates  string str.
*char: Character to be initialised.
*str: string pointer.
*Description:Returns pointer to  newly allocated space in memory.
*/
char *_strdup(char *str)
{
	char *p;
	int x, y = 0;

	if (str == NULL)
	return (NULL);
	x = 0;
	while (str[x] != '\0')
	x++;

	p = malloc(sizeof(char) * (x + 1));

	if (p == NULL)
	return (NULL);

	for (y = 0 ; str[y]; y++)
	p[y] = str[y];

	return (p);
}
