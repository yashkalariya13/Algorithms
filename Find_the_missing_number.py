def find_missing(lst):
    start = lst[0]
    end = lst[-1]
    return sorted(set(range(start, end + 1)).difference(lst))
 
# Driver code
lst=list(map(int,input().split()))
print(find_missing(lst))