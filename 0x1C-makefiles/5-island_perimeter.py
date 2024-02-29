#!/usr/bin/python3
"""Function that should return perimeter of the island described"""


def island_perimeter(grid):
    """Returns perimeterss of the  island"""

    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for p in range(height):
        for m in range(width):
            if grid[p][m] == 1:
                size += 1
                if (m > 0 and grid[p][m - 1] == 1):
                    edges += 1
                if (p > 0 and grid[p - 1][m] == 1):
                    edges += 1
    return size * 4 - edges * 2
