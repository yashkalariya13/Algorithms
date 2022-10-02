import random

#Dice Roller

print("Initially number on Dice is: {0}".format(random.randint(1,6)))

C = int(input("To Roll Dice Press any number or To Exit Press 0---> "))

while C !=0:
    print("Number on Dice is: {0}".format(random.randint(1,6)))
    
    C = int(input("To Roll Dice Press 1 or To Exit Press 0---> "))
    
