#!/bin/python3
import os

# Complete the twoStrings function below.
def twoStrings(s1, s2):
    if s1 in s2 or s2 in s1:
        return "YES"
    else:
        s1 = set(list(s1))
        s2 = set(list(s2))
        first = s1.intersection(s2)
        second = s2.intersection(s1)
        return "YES" if (first is not None and len(first) > 0) or (second is not None and len(second) > 0) else "NO"

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input())

    for q_itr in range(q):
        s1 = input()

        s2 = input()

        result = twoStrings(s1, s2)

        fptr.write(result + '\n')

    fptr.close()
