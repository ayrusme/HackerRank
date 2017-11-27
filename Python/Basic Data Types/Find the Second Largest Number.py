if __name__ == '__main__':
    n = int(input())
    org_list = list(map(int, input().split()))
    list_wo_duplicates = []
    for num in org_list:
        if num not in list_wo_duplicates:
            list_wo_duplicates.append(num)
    list_wo_duplicates.sort(reverse=True)
    print(list_wo_duplicates[1])