#!/usr/bin/python3
""" Module for island_perimeter.
"""


def island_perimeter(grid):
    ''' Function to calculate the perimeter of an island
    given a grid that represents it. '''
    perimeter = 0
    for row in range(len(grid)):
        connect_check = perimeter
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                if col == 0 or col == len(grid[0]) - 1:
                    perimeter += 1
                else:
                    if grid[row][col - 1] == 0:
                        perimeter += 1
                    if grid[row][col + 1] == 0:
                        perimeter += 1
                if row == 0 or row == len(grid) - 1:
                    perimeter += 1
                else:
                    if grid[row - 1][col] == 0:
                        perimeter += 1
                    if grid[row + 1][col] == 0:
                        perimeter += 1
        if perimeter != 0 and connect_check == perimeter:
            return perimeter
    return perimeter
