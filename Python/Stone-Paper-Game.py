# Stone Paper Scissor game 
import random
print("\n\n\n")
s="""Welcome to Stone  Paper  Scissor game!
At the end of match result will be publish.
Follow the given rule to win this match.

Rules :>
rule 1 : This game for only two people (Computer vs You)
rule 2 : There r total n round in this game
rule 3 : There r total 3 bets Stone / Paper / Scissor
rule 4 : You can choose only 1 bet

How to win :
choose any bet and comparing with Computer bet You will win/loose.
example - Stone Vs Paper > Paper win, Stone Vs Scissor > Stone win , Scissor Vs Paper > Scissor win"""

print(s)
name=input("\n\nEnter Your Name \n").title()
n=int(input("\n\nEnter the no of times you want to play\n"))
a=1
os=0
cs=0
ch=n
arr=["Stone" , "Paper" , "Scissor"]
while(a<=n):
    str =random.choice(arr)
    b=input("Enter your choice : Stone / Paper / Scissor\n").title()
    if(b=="Stone" and str=="Paper"):
        cs+=1
        ch-=1
        print("Computer Wins")
        #print("Your Score = " , os ,"/" , a)
        a+=1
        print("\n")
    elif(b=="Scissor" and str=="Stone"):
        cs+=1
        ch-=1
        print("Computer Wins")
        #print("Your Score = " , os ,"/" , a)
        a+=1
        print("\n")
    elif(b=="Paper" and str=="Scissor"):
        cs+=1
        ch-=1
        print("Computer Wins")
        #print("Your Score = " , os ,"/" , a)
        a+=1
        print("\n")
    elif(str=="Stone" and b=="Paper"):
        os+=1
        ch-=1
        print("You Wins")
        #print("Your Score = " , os ,"/" , a)
        a+=1
        print("\n")
    elif(str=="Scissor" and b=="Stone"):
        os+=1
        ch-=1
        print("You Wins")
        #print("Your Score = " , os ,"/" , a)
        a+=1
        print("\n")
    elif(str=="Paper" and b=="Scissor"):
        os+=1
        ch-=1
        print("You Wins")
        #print("Your Score = " , os ,"/" , a)
        a+=1
        print("\n")
    elif(str==b):
        print("Tie")
        ch-=1
        #print("Your Score = " , os ,"/" , a)
        a+=1
        print("\n")

f="""\n\n\n\n\nYou have Reached the end of the Game
        Hope you enjyed the game
        Your score is below """
print(f)
print(" Your Score: ",os ," And Computers Score:  ", cs)
if(os>cs):
    print("\n\nCongratulation !!!!!!!!!! ",name,  "\nYou won the Game")
elif(os<cs):
    print("\n\nComputer Won the Game\n" ,name,"Better Luck next time")
else:
    print("\n\nThere is between you and Computer .\n" ,name,"Better Luck next time")



