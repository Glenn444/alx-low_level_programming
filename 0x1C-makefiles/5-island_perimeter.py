#!/usr/bin/python3
"""
Module for calculating the perimeter of an island.
"""


def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
        grid (list): A list of lists representing the grid.

    Returns:
        int: The perimeter of the island.

    """
    rows = len(grid)
    cols = len(grid[0]) if rows > 0 else 0
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4  # Start with the full perimeter
                # Check left neighbor
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
                # Check top neighbor
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2

    return perimeter
