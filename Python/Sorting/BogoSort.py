import random

# Bogosort, because it's awesome

list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

len = len(list)

issorted = True

def checksort(list):
    global issorted

    for i in range(1,len):

        if list[i] > list[i - 1]:
            pass
        else:
            issorted = False

    return issorted

random.shuffle(list)

while not checksort(list):
    random.shuffle(list)
    issorted = True

print(list)
