#!/bin/python3

import os

# Complete the countingValleys function below.
def countingValleys(n, s):
    valley = 0
    level = 0
    for item in s:
        if item == "U":
            level += 1
        elif item == "D":
            level -= 1
        if level == 0 and item == "U":
            valley += 1
    return valley

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    s = input()

    result = countingValleys(n, s)

    fptr.write(str(result) + '\n')

    fptr.close()
