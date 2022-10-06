def power(x, n):
    if (n==0):
        return 1
    elif (int(n%2) == 0):
        return (power(x,int(n/2))*power(x,int(n/2)))
    else:
        return (x*power(x,int(n/2))*power(x,int(n/2)))

#Driver code
x=int(input("Enter number"))
n=int(input("Enter power"))
ans=power(x,n)
print(ans)
