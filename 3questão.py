def sequencia1():
    cosnt=2
    num_inicial=1
    print("Sequencia a)")
    for  i in range(1,7):
        num_inicial=num_inicial+cosnt 
        print(num_inicial)

def sequencia2():
    num_inicial=2
    multiplicador=2
    for i in range(1,10):
        num_inicial=num_inicial*multiplicador
        print(num_inicial)


def sequencia3():
    num_inicial=0
    exp=2
    for i in range(1,11):
        print(num_inicial**2)
        num_inicial+=1


def sequencia4():
    num_inicial=2
    exp=2
    for i in range(1,9):
        print(num_inicial**2)
        num_inicial+=2

def sequencia5():
    array = [1, 1]
    ind=0
    for i in range(1, 11):
        array.append(array[-1] + array[-2])
        print(array[ind])
        ind+=1


                     
        

        

