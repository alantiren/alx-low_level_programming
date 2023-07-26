#!/usr/bin/python3
"""
Module for perimeter of island
"""

def island_perimeter(grid):
    """
    Function to calculate the perimeter of an island described in grid.

    Args:
        grid (list): A list of lists of integers representing the grid.
    """
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0
    for i in range(1, rows - 1):
        for j in range(1, cols - 1):
            if grid[i][j] == 1:
                if grid[i - 1][j] == 0:
                    perimeter += 1
                if grid[i + 1][j] == 0:
                    perimeter += 1
                if grid[i][j - 1] == 0:
                    perimeter += 1
                if grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
