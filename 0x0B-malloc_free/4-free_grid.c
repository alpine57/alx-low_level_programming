#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
*free_grid: frees a 2 dimensional grid
*description:function that frees a 2 dimensional grid
*@height:height of element
*@grid: giri of figure
*Return: 0
**/
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x <= height; x++)
	{
	free(grid[x]);
	}
	free(grid);
}
