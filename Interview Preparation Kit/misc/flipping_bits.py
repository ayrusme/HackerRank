#!/bin/python3

import os

# Complete the flippingBits function below.
def flippingBits(n):
    bits = bin(n).split('b')[1]
    if len(bits) < 32:
        bits = '0' * (32 - len(bits)) + bits
    return int(''.join([('1' if item == '0' else '0') for item in bits]), 2)


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input())

    for q_itr in range(q):
        n = int(input())

        result = flippingBits(n)

        fptr.write(str(result) + '\n')

    fptr.close()
