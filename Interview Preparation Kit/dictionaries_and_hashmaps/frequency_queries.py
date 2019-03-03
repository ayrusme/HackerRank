#!/bin/python3
import os
from collections import defaultdict

# Complete the freqQuery function below.
def freqQuery(queries):
    arr = []
    op = []
    count = defaultdict()

    def arr_push(arg):
        if arg in count:
            count[arg] += 1
        else:
            count[arg] = 1
        arr.append(arg)


    def arr_pop(arg):
        if arg in count and count[arg] > 0:
            if count[arg] == 1:
                del count[arg]
            else:
                count[arg] -= 1
            arr.remove(arg)

    def calc_freq(arg):
        op.append(1 if arg in count.values() else 0)

    d = {
        1: arr_push,
        2: arr_pop,
        3: calc_freq
    }

    for query in queries:
        d[query[0]](query[1])
    return op

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input().strip())

    queries = []

    for _ in range(q):
        queries.append(list(map(int, input().rstrip().split())))

    ans = freqQuery(queries)

    fptr.write('\n'.join(map(str, ans)))
    fptr.write('\n')

    fptr.close()
