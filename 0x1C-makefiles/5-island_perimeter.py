#!/usr/bin/python3
"""This defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Function that returns the perimiter of an island.

    In the grid, water is represented by 0 and land by 1.

    Args:
        grid (list): A list of list of integers that represent an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    perimeter = 0
    width = len(grid[0])
    height = len(grid)

    for a in range(height):
        for b in range(width):
            if grid[a][b] == 1:
                perimeter += 4
                if b > 0 and grid[a][b - 1] == 1:
                    perimeter -= 2
                if a > 0 and grid[a - 1][b] == 1:
                    perimeter -= 2

    return perimeter
