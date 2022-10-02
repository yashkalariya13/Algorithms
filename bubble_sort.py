def bubblesort(arr):
    n=len(arr)
    swapped = False
    for i in range (n-1):
       
        for j in range (0,n-i-1):
           
            if arr[j]>arr[j+1]:
                swapped = True
                temp=arr[j]
                arr[j]=arr[j+1]
                arr[j+1]=temp

        if not swapped:
            return    
  


arr=[23,21,34,32,12,10,10]
bubblesort(arr)
print("Sorted array :")
for i in range(len(arr)):
    print(arr[i],end=" ")