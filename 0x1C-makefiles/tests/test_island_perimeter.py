#!/usr/bin/python3
import unittest

island_perimeter = __import__('5-island_perimeter').island_perimeter


class TestSolution(unittest.TestCase):
    def test_case1(self):
        grid = [
            [0, 0, 1, 0, 0],
            [0, 1, 1, 1, 0],
            [0, 0, 1, 1, 0],
            [0, 0, 1, 0, 0],
        ]

        result = island_perimeter(grid)
        solution = 14
        self.assertEqual(result, solution)

    def test_case2(self):
        grid = [
            [0, 1, 0, 0],
            [1, 1, 1, 0],
            [0, 1, 0, 0],
            [1, 1, 0, 0]
        ]

        result = island_perimeter(grid)
        solution = 16
        self.assertEqual(result, solution)

    def test_case3(self):
        grid = [
            [0, 0, 0, 0, 0, 0],
            [0, 1, 0, 0, 0, 0],
            [0, 1, 0, 0, 0, 0],
            [0, 1, 1, 1, 0, 0],
            [0, 0, 0, 0, 0, 0]
        ]

        result = island_perimeter(grid)
        solution = 12
        self.assertEqual(result, solution)
