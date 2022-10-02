def interpolation_search(arr, x):
    low = 0
    high = len(arr) - 1
    while low <= high and x >= arr[low] and x <= arr[high]:
        if low == high:
            if arr[low] == x:
                return low
            return -1
        pos = low + int(((float(high - low) / (arr[high] - arr[low])) * (x - arr[low])))
        if arr[pos] == x:
            return pos
        if arr[pos] < x:
            low = pos + 1
        else:
            high = pos - 1
    return -1


if __name__ == '__main__':
    arr = [12, 11, 13, 5, 6, 7]
    x = 11
    result = interpolation_search(arr, x)
    if result != -1:
        print("Element is present at index", str(result))
    else:
        print("Element is not present in array")
