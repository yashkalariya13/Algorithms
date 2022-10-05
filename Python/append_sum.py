def append_sum(lst):
    num = 3
    while(num>0):
        sli = lst[-2:]
        sum = 0
        for i in sli:
            sum = sum + i
        lst.append(sum)
        num-=1
    print(lst)
append_sum([1, 2, 3])
