#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/*
*_strdup():Returns a pointer to a new string which is a duplicate of the string str.
*char: Character to be initialised.
*str: string pointer.
Description:Returns a pointer to a newly allocated space in memory, which contains a copy.
*/
char *_strdup(char *str)
{
	char *p;
	int x,y = 0;

	if(str == NULL)
		return(NULL);
	x = 0;
	while(str[x] != '\0')
	x++;

	p = malloc(sizeof(char) *(y+1));

	if (p == NULL)
	return(NULL);

	for (y = 0;str[y]; y++)
	p[y] = str[y];

	return (p);
}
