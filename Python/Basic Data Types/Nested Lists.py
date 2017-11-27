from operator import itemgetter

if __name__ == '__main__':
    students = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        students.append([name,score])
    students = sorted(students, key=itemgetter(1))
    second_low = students[0][1]
    for student in students:
        if student[1] > second_low:
            second_low = student[1]
            break
    students = sorted([student for student in students if student[1] == second_low], key=itemgetter(0))
    for name in students:
        print(name[0])
    