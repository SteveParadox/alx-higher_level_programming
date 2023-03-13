#!/usr/bin/python3

"""A function that finds the biggest integer of a list"""


def max_integer(my_list=[]):
    """Finds the biggest integer of a list"""
    if len(my_list) == 0:
        return None
    max_val = my_list[0]
    for val in my_list:
        if val > max_val:
            max_val = val
    return max_val
