'''
Operations on Stack
'''

arr = []

# def input_elements(n):
#     for i in range(0,n):
#         ele = int(input(f"Enter {i+1} element: "))
#         arr.append(ele)

def push():
    if(len(arr) == n):
        print("Stack Overflow")
    else:
        ele = int(input("Enter Value to be inserted: "))
        arr.append(ele)

def pop():
    if(len(arr) == 0):
        print("No Elements There")
    else:
        print(f"Popped element is: {arr.pop()}")
        #del arr[n-1]

def disp():
    if(len(arr) == 0):
        print("No Elements There")
    else:
        print(f"Array elements are: {arr}")
        #print(arr)

def peek():
    if(len(arr) == 0):
        print("No Elements There")
    else:
        print(f"Array elements are: {arr[-1]}")

def isFull():
    if(len(arr) == n):
        print("Stack Overflow")
    else:
        print("Stack not full")

def isEmpty():
    if(len(arr) == 0):
        print("Empty Stack")
    else:
        print("Stack has elements")

def size():
    print(f"Size of array is: {len(arr)}")


print("Basic Operations on Stack")
n = int(input("Enter size of array: "))

while(True):
    print("\n")
    print("1_Push in Stack")
    print("2_Pop from Stack")
    print("3_Display the Stack")
    print("4_Peek from Stack")
    print("5_IsFull Stack")
    print("6_IsEmpty Stack")
    print("7_Size")
    print("8_Exit")

    opt = int(input("\nEnter your choice: "))

    if(opt == 1):
        push()
    elif(opt == 2):
        pop()
    elif(opt == 3):
        disp()
    elif(opt == 4):
        peek()
    elif(opt == 5):
        isFull()
    elif(opt == 6):
        isEmpty()
    elif(opt == 7):
        size()
    elif(opt == 8):
        exit()
    else:
        print("Invalid Choice")