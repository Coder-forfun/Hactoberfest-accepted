def ans(array, x):
    low = 0
    high = 1
    while x > high:
        newLow = high+1
        high = high + (high - (low-1))
        low = newLow

    return binarySearch(array, x, 0, len(array)-1)


def binarySearch(array, x, low, high):

    while low <= high:

        mid = low + (high - low)//2

        if array[mid] == x:
            return mid

        elif array[mid] < x:
            low = mid + 1

        else:
            high = mid - 1

    return -1


array = [3, 4, 5, 6, 7, 8, 9]
x = 6

result = ans(array, x)

print(result)
