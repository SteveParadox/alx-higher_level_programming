#!/usr/bin/python3
"""A function that prints integers in reverse"""


def print_reversed_list_integer(my_list=[]):
    if not my_list:
        return
    for i in range(len(my_list) - 1, -1, -1):
        print("{:d}".format(my_list[i]))
