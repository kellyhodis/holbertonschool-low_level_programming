#!/usr/bin/python3
""" Module for island_perimeter.
"""


def island_perimeter(grid):
    ''' Function to calculate the perimeter of an island
    given a grid that represents it. '''
    perimeter = 0
    for j in range(len(grid)):
        for i in range(len(grid[0])):
            connect_check = perimeter
            if grid[j][i] == 1:
                perimeter += 1
                if i == 0 or i == len(grid[0]) - 1:
                    perimeter += 1
                elif grid[j - 1][i] == 0 or grid[j + 1][i] == 0:
                    perimeter += 1
                if j == 0 or j == len(grid) - 1:
                    perimeter += 1
                elif grid[j][i - 1] == 0 or grid[j][i + 1] == 0:
                    perimeter += 1
            if perimeter != 0 and connect_check == perimeter:
                return perimeter
    return perimeter
