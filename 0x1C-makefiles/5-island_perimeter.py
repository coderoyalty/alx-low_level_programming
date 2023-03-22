#!/usr/bin/python3
""" island_perimeter function """


def land_perimeter(grid, i, j):
    """
        calculates the perimeter of a land on the
        grid.
    """
    perimeter = 0
    len_row = len(grid)
    len_col = len(grid[0])
    if i <= 0 or grid[i - 1][j] != 1:
        perimeter += 1
    if j <= 0 or grid[i][j - 1] != 1:
        perimeter += 1
    if i >= len_row - 1 or grid[i + 1][j] != 1:
        perimeter += 1
    if j >= len_col - 1 or grid[i][j + 1] != 1:
        perimeter += 1
    return perimeter


def island_perimeter(grid):
    """
        gets the perimeter for a grid
        representing an island.
    """
    len_row = len(grid)
    len_col = len(grid[0])
    perimeter = 0

    for i in range(len_row):
        for j in range(len_col):
            value = grid[i][j]
            if value == 1:
                perimeter += land_perimeter(grid, i, j)
    return perimeter
