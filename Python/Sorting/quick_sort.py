def lomuto_partition(arr, p, r):
    pivot = arr[r]
    i = p - 1
    for j in range(p, r):
        if arr[j] <= pivot:
            i += 1
            arr[j], arr[i] = arr[i], arr[j]

    arr[j + 1], arr[i + 1] = arr[i + 1], arr[j + 1]
    return i + 1


def quick_sort(arr, l, r):
    if l < r:
        q = lomuto_partition(arr, l, r)
        quick_sort(arr, l, q - 1)
        quick_sort(arr, q + 1, r)

arr = [2, 8, 7, 1, 3, 5, 6, 4]
quick_sort(arr, 0, len(arr) - 1)
print(arr)
