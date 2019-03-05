#!/bin/python3

import os

# Complete the primality function below.
def primality(n):
    if n == 1:
        return "Not prime"
    elif n <= 3:
        return "Prime"
    elif n % 2 == 0 or n % 3 == 0:
        return "Not prime"
    else:
        limit = int(n ** 0.5)
        for i in range(3, limit + 1):
            if n % i == 0:
                return "Not prime"
        return "Prime"


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    p = int(input())

    for p_itr in range(p):
        n = int(input())

        result = primality(n)

        fptr.write(result + '\n')

    fptr.close()
