# Python Program to reverse INT,STRING or float

int_input = int(input("Enter Number to be reversed---> "))
str_input = input("Enter String to be reversed---> ")
float_input = float(input("Enter Floating point number to be reversed---> "))

choice = int(input("1: INT  2: STRING  3:FLOAT  4:EXIT ----->  "))
while choice!=4:
    if choice == 1:
        print("Original Integer is---> ",int_input)
        print("Reversed Integer is---> ",(str(int_input)[::-1]))
    elif choice == 2:
        print("Original String is---> ",str_input)
        print("Reversed String is---> ",(str(str_input)[::-1]))
    elif choice == 3:
        print("Original Floating Number is---> ",float_input)
        print("Reversed Floating Number is---> ",(str(float_input)[::-1]))
        
    print()
    choice = int(input("1: INT  2: STRING  3:FLOAT  4:EXIT ----->  "))    
