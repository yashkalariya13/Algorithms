def jump_search(arr, x):
    n = len(arr)
    step = math.sqrt(n)
    prev = 0
    while arr[int(min(step, n) - 1)] < x:
        prev = step
        step += math.sqrt(n)
        if prev >= n:
            return -1
    while arr[int(prev)] < x:
        prev += 1
        if prev == min(step, n):
            return -1
    if arr[int(prev)] == x:
        return prev
    return -1



if __name__ == '__main__':
    arr = [12, 11, 13, 5, 6, 7]
    x = 11
    result = jump_search(arr, x)
    if result != -1:
        print("Element is present at index", str(result))
    else:
        print("Element is not present in array")
