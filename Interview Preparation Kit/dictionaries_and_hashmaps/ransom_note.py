#!/bin/python3

from collections import Counter

# Complete the checkMagazine function below.
def checkMagazine(magazine, note):
    return "Yes" if (Counter(note) - Counter(magazine)) == {} else "No"

if __name__ == '__main__':
    mn = input().split()

    m = int(mn[0])

    n = int(mn[1])

    magazine = input().rstrip().split()

    note = input().rstrip().split()

    print(checkMagazine(magazine, note))
