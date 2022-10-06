import random
import math
#taking lower limit of number with l and upper limit with u
l=int(input("Enter Lower bound:- "))
u=int(input("Enter Upper bound:- "))
x=random.randint(l, u)#Taking a random number
print("    ")
print("You have only",
	round(math.log(u - l + 1, 2)),
	" chances to guess the Number!")
c=0#counter to count no of guesses
while c<math.log(u - l + 1, 2):
	c+=1
	g=int(input("Guess a Number :"))
#checking the number to be guessed
	if x==g:
		print("Congratulations you guessed the number in ",
			c," times")
		break
	elif x>g:
		print("You guessed Smaller Number!")
	elif x<g:
		print("You Guessed greater Number!")
if c>=math.log(u - l + 1, 2):
	print("The number is ",x)
	print("Good Luck for Next time!")
