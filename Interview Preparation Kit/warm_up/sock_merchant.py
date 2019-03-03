#!/bin/python3

import math
import os

# Complete the sockMerchant function below.
def sockMerchant(n, ar):
    total_pairs = 0
    ar_set = set(ar)
    for item in ar_set:
        if item in ar:
            item_count = ar.count(item)
            print(item, item_count)
            if item_count >= 2:
                ar = [x for x in ar if x != item]
                if item_count % 2 == 0:
                    total_pairs += math.floor(item_count / 2)
                elif (item_count - 1) % 2 == 0:
                    total_pairs += math.floor((item_count - 1) / 2)
    return total_pairs



if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = sockMerchant(n, ar)

    fptr.write(str(result) + '\n')

    fptr.close()
