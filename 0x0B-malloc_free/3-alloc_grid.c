#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the grid, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
    int **grid;

    if (width <= 0 || height <= 0)
        return (NULL);

    grid = malloc(sizeof(int *) * height);

    if (grid == NULL)
        return (NULL);

    for (int i = 0; i < height; i++)
    {
        grid[i] = malloc(sizeof(int) * width);

        if (grid[i] == NULL)
        {
            for (int j = 0; j < i; j++)
                free(grid[j]);

            free(grid);
            return (NULL);
        }

        for (int j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    return (grid);
}