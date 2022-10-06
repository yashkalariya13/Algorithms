# WE CAN IMPLEMENT BINARY SEARCH USING TWO WAYS:--
#1. Iterative Approach
#2. Recursive Approach

#--------------------------------------------------------------------------------------------------------------------------------------------------------------------

#1 - ITERATIVE Approach


# It returns location of x in given array arr
# if present, else returns -1
def binarysearch(arr,n,x): #
  left=0
  right=n-1
  while(left<right):
    mid=(left+right)//2
    #check if x is present at mid
    if arr[mid]==x:
      return mid
    # If x is greater, ignore left part
    elif (arr[mid]>x):
      right=mid-1
    # If x is smaller, ignore right part
    else:
      left=mid+1
  #IF WE REACH HERE THATS MEAN ELEMENT IS NOT PRESENT IN THE ARRAY
  return -1

#Driver Code
arr=list(map(int,input().split()))
x=int(input())
n=len(arr)
#Function Call
answer = binarysearch(arr,n,x)
if answer==-1:
  print("ELEMENT IS NOT FOUND IN THE ARRAY")
else:
  print("ElEMENT IS FOUND AT INDEX % d" % answer)

 # --------------------------------------------------------------------------------------------------------------------------------------------------------------

# 2. Recursive Approach

# Python3 Program for recursive binary search.
 
# Returns index of x in arr if present, else -1
 
 
def binarySearch(arr, l, r, x):
 
    # Check base case
    if r >= l:
      mid = l + (r - l) // 2
 
        # If element is present at the middle itself
        if arr[mid] == x:
            return mid
 
        # If element is smaller than mid, then it
        # can only be present in left subarray
        elif arr[mid] > x:
            return binarySearch(arr, l, mid-1, x)
 
        # Else the element can only be present
        # in right subarray
        else:
            return binarySearch(arr, mid + 1, r, x)
 
    else:
        # Element is not present in the array
        return -1
 
 
# Driver Code
arr = list(map(int,input().split()))
x = int(input()
 
# Function call
answer = binarySearch(arr, 0, len(arr)-1, x)
 
if result == -1:
    print("Element is not present in array")
else:
    print("Element is present at index % d" % answer)
     
#  ------------------------------------------------------------------------------------------------------------------------------------------
  
