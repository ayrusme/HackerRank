#!/bin/python3

import os

# Complete the repeatedString function below.
def repeatedString(s, n):
    if "a" not in s:
        return 0
    str_length = len(s)
    if str_length == 1:
        return n
    return s.count("a") * (n // str_length) + s[:(n % str_length)].count("a")

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    n = int(input())

    result = repeatedString(s, n)

    fptr.write(str(result) + '\n')

    fptr.close()
