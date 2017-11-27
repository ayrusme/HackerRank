from re import findall

def count_substring(string, sub_string):
    return len(findall('(?='+sub_string+')', string))