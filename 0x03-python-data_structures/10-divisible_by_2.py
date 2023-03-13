#!/usr/bin/python3

"""A function that finds all multiples of 2 in a list"""


def divisible_by_2(my_list=[]):
    result = []
    for num in my_list:
        result.append(True if num % 2 == 0 else False)
    return result
