def seq_search(arr, x):
    for i in range(len(arr)):
        if arr[i] == x:
            return i
    return -1



if __name__ == '__main__':

    arr = [12, 11, 13, 5, 6, 7]
    x = 11
    result = seq_search(arr, x)
    if result != -1:
        print("Element is present at index", str(result))
    else:
        print("Element is not present in array")

