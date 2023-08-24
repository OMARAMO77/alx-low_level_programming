#!/usr/bin/python3

def island_perimeter(grid):
    """---"""
    if not grid:
        return 0

    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for a in range(1, rows - 1):
        for b in range(1, cols - 1):
            if grid[a][b] == 1:
                if grid[a - 1][b] == 0:
                    perimeter += 1
                if grid[a + 1][b] == 0:
                    perimeter += 1
                if grid[a][b - 1] == 0:
                    perimeter += 1
                if grid[a][b + 1] == 0:
                    perimeter += 1
    return perimeter
