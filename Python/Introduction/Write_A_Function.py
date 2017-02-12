import calendar

def is_leap(year):
    leap = False
    
    if (calendar.isleap(year)):
        leap = True
        
    return leap


year = int(input())
print(is_leap(year))