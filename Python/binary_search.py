import random


l = []

for i in range(32):
    l.append(random.randint(1,100))
       
l.sort()
print(l)
k = int(input("enter value of k:")) 
def binary_search(l,k):
  
  b=0
  end=len(l)-1
  
  
  while(end-b>1):
    mid=(end+b)//2
    
    if(l[mid]==k):
      print("1")
      return 1
    if(l[mid]>k):
      end=mid-1
    if(l[mid]<k):
      b=mid+1
      
  if(l[b]==k) or (l[end]==k):
    print("1")
    return 1
  else:
    print("0")
    return 0
    
binary_search(l,k)


  
        


    