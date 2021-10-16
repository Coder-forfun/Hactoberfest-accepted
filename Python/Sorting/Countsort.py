//Count sort program 
//Function body 

def countingSort(arr):
    n = len(arr)
    arr1 = [0] * n

    x = [0] * 10

    for i in range(0, n):
        x[arr[i]] += 1

    for i in range(1, 10):
        x[i] += x[i - 1]


    i = n - 1
    while i >= 0:
        arr1[x[arr[i]] - 1] = arr[i]
        x[arr[i]] -= 1
        i -= 1

    for i in range(0, n):
        arr[i] = arr1[i]

//Input 
arr = [7, 2, 4, 8, 3, 3, 1]
//Calling function 
countingSort(arr)
//Output
print(arr)
