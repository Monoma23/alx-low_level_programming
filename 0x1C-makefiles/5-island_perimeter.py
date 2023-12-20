#!/usr/bin/python3
"""islanddd Perimeterr
"""


def island_perimeter(grid):
    """returs the perimeterrr of the island described in griddd"""
    perimeter = 0
    for k in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[k][j] == 0:
                continue
            perimeter += 4
            if k > 0:
                perimeter = perimeter - grid[k - 1][j]
            if k < len(grid) - 1:
                perimeter = perimeter - grid[k + 1][j]
            if j > 0:
                perimeter = perimeter - grid[k][j - 1]
            if j < len(grid[0]) - 1:
                perimeter = perimeter - grid[i][j + 1]
    return perimeter
