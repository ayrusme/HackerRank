if __name__ == '__main__':
    number_of_inputs = input()
    inputx = []
    for _ in range(number_of_inputs):
        inp_list = raw_input().split()
        operation = inp_list[0]
        args = inp_list[1:]
        if operation !="print":
            operation += "("+ ",".join(args) +")"
            eval("inputx."+ operation)
        else:
            print inputx