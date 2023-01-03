#!/usr/bin/python3
"""A function to measure the perimeter of an island."""


def island_perimeter(grid):
    """
    The grid represents water by 0 and land by 1.

    Args:
        grid (list of list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edge = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edge += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edge += 1
    a = size * 4
    b = edge * 2
    return a - b
