'''
Using the pseudocode below, write a program called GuessingGame.py that plays
a simple guessing game. The program should:
• Generate a random number between 1 and 100. Assign this number to a
variable called “goal”.
• Set a variable called “guess” to 0.
• Print a message that describes the aim of the game (as shown in the example
below).
• Print a blank line.
• While guess is not correct (i.e. guess != goal), do the following steps:
– Ask the user to enter a guess and store the value in the “guess” variable.
– If the guess is greater than the goal, print the message “Too high, try
again.”
– If the guess is less than the goal, print the message “Too low, try
again.”
– If the guess is the same as the goal, print the message “Well done!”
• Print the message “See you later.”.
You will need to use a while loop and some if statements to complete this
program.
'''
import random
goal=random.randint(1,100)
guess=0
print('''
------------------KittyCat's Guessing Game!-------------------------
Guess the number and win the prize!
--------------------------------------------------------------------
''')
print()

while guess!=goal:
    guess=int(input("Guess the winning number: "))
    if guess>goal:
        print("Too High! Try again")
    elif guess<goal:
        print("Too Low! Try again")
    elif guess==goal:
        print("Well done!")
print("See you later!")
