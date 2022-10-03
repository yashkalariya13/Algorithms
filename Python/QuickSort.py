def quick_sort(arr):
    if len(arr) > 1:
        pivot = arr[0]
        left = [i for i in arr[1:] if i <= pivot]
        right = [i for i in arr[1:] if i > pivot]
        return quick_sort(left) + [pivot] + quick_sort(right)
    else:
        return arr


if __name__ == '__main__':
    arr = [12, 11, 13, 5, 6, 7]
    print(quick_sort(arr))
