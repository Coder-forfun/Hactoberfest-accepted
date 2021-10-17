"""
utf 8 is used
python 3
.
.
"""
import random
print('////////////////////////////////////\n\nWELCOME TO TIC-TAC-TOE \n\n ////////////////////////////////////////')
player1=input("Enter player 1 name:-")  #player information
player2=input("Enter player2 name:-")

aa=1
b=1

while b==1:
    howTo=input("How do you want to choose x or y? (Enter 1 to choose by yourself or enter 2 to choose it randomly) :-")

    
    if howTo=='1':
      while aa==1:
          a=input("Enter a alphabet (PLAYER 1) x or y:-")
          if a=='x'or a=='X':
              player1Alpha='x'
              PlayerWithx=player1
              player2Alpha='y'
              PlayerWithy=player2
              aa+=1
              b+=1
          elif a=='y' or a=='Y':
              player1Alpha='y'
              PlayerWithy=player1
              player2Alpha='x'
              PlayerWithx=player2
              aa+=1
              b+=1
          else:
              print("YOU ARE SUPPOSED TO ENTER EITHER X OR Y ONLY!")
              
       

    elif howTo=='2':
        a=random.randrange(0,2)
        if a == 0:
            player1Alpha='x'
            PlayerWithx=player1
            player2Alpha='y'
            PlayerWithy=player2
            b+=1
        elif a==1:
            player1Alpha='y'
            PlayerWithy=player1
            player2Alpha='x'
            PlayerWithx=player2
            b+=1

    else:
        print("YOU ARE SUPPOSED TO ENTER ONLY 1 OR 2!")
    
 #introducion and arena formation in IDLE itself       
print("|||||||||||||||||||||||||READ THE BELOW LINES PROPERLY |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||")
print('\n\n',player1,"'s alphabet is",player1Alpha,'\n')
print(player2,"'s alphabet is",player2Alpha,'\n')
print("\nThis is the arena:-\n .   .   .   \n .   .   .\n .   .   .\n\n=> LABEL:-\n   . =Empty box\n   x=Box with x\n    y=box with y\n\n")
a1,a2,a3,a4,a5,a6,a7,a8,a9='.','.','.','.','.','.','.','.','.'

 

print('''Descriptions:- \n1) Remember the order of dots are  your  keyboard number pad.The value of all the positions are as given below:- \n\n 7   8   9   \n 4   5   6\n 1   2   3\n\n''')
print("2) You are supposed to enter the number of  the position to place your alphabets(X OR Y).\n\n")
print("|||||||||||||||||||||||||| READ  THE  ABOVE  LINES  CAREFULLY |||||||||||||||||||||")

#gameplay logic starts

c=1
d=1
while c==1:
    
    d=1
    while d==1:
        player1Entered=input("Enter your position (Player1):-")
    
        if player1Entered=='1':
            if a1=='.':
                a1=player1Alpha
                d+=1
            else:
                print("IT IS ALREADY TAKEN!")
                
        elif player1Entered=='2':
            if a2=='.':
                a2=player1Alpha
                d+=1
                
            else:
                print("IT IS ALREADY TAKEN!")
        elif player1Entered=='3':
            if a3=='.':
                a3=player1Alpha
                d+=1
                
            else:
                print("IT IS ALREADY TAKEN!")
        elif player1Entered=='4':
            if a4=='.':
                a4=player1Alpha
                d+=1
                c+=1
            else:
                print("IT IS ALREADY TAKEN!")
        elif player1Entered=='5':
            if a5=='.':
                a5=player1Alpha
                d+=1
                
            else:
                print("IT IS ALREADY TAKEN!")
        elif player1Entered=='6':
           if a6=='.':
                a6=player1Alpha
                d+=1
                
           else:
                print("IT IS ALREADY TAKEN!")
        elif player1Entered=='7':
            if a7=='.':
                a7=player1Alpha
                d+=1
               
            else:
                print("IT IS ALREADY TAKEN!")
        elif player1Entered=='8':
            if a8=='.':
                a8=player1Alpha
                d+=1
                
            else:
                print("IT IS ALREADY TAKEN!")
        elif player1Entered=='9':
            if a9=='.':
                a9=player1Alpha
                d+=1
            else:
                print("IT IS ALREADY TAKEN!")
        else:
            print("ENTER ONLY YOUR POSITION!")
    print('\n',a7,'   ',a8,'   ',a9,'   ','\n',a4,'   ',a5,'   ',a6,'\n',a1,'   ',a2,'   ',a3,'\n\n')
    d=1
    if ((a1==a2==a3 )and a1!='.' and a2!='.' and a3!='.')or ((a4==a5==a6)and a4!='.' and a5!='.' and a6!='.') or ((a7==a8==a9 )and a7!='.' and a8!='.' and a9!='.') or ((a5==a1==a9) and a5!='.' and a1!='.' and a9!='.' ) or ((a3==a5==a7)and a7!='.' and a5!='.' and a3!='.') or ((a1==a4==a7)and a1!='.' and a4!='.' and a7!='.') or ((a2==a5==a8)and a2!='.' and a5!='.' and a8!='.') or ((a3==a6==a9)and a3!='.' and a6!='.' and a9!='.'):
        c+=1
        d=1000
    elif(a1!='.' and a2!='.' and a3!='.' and a4!='.' and a5!='.' and a6!='.' and a7!='.' and a8!='.' and a9!='.'):
        
        c+=1
        d=1000
    
    else:
        c=1
    if c==2:
        print("\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n")
        print("\n                       !!!!!!      GAME ENDED  !!!!!!                                                  \n")
        print("\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n")
        print("\n                                   RESULT                                                        \n")
        
        if (a1==a2==a3=='x'):
             print(PlayerWithx," !! CONGRATS\n\n")
             print('\n',a7,'   ',a8,'   ',a9,'   ','\n',a4,'   ',a5,'   ',a6,'\n(',a1,')   (',a2,')   (',a3,')\n\n')
        elif a1==a2==a3=='y':
            print(PlayerWithy," WON!! CONGRATS\n\n")
            print('\n',a7,'   ',a8,'   ',a9,'   ','\n',a4,'   ',a5,'   ',a6,'\n(',a1,')   (',a2,')   (',a3,')\n\n')
        elif a4==a5==a6=='x':
            print(PlayerWithx," WON!! CONGRATS\n\n")
            print('\n',a7,'   ',a8,'   ',a9,'   ','\n(',a4,')   (',a5,')   (',a6,')\n',a1,'   ',a2,'   ',a3,'\n\n')
        elif a4==a5==a6=='y':
            print(PlayerWithy," WON!! CONGRATS\n\n")
            print('\n',a7,'   ',a8,'   ',a9,'   ','\n(',a4,')   (',a5,')   (',a6,')\n',a1,'   ',a2,'   ',a3,'\n\n')
        elif a7==a8==a9=='x':
            print(PlayerWithx," WON!! CONGRATS\n\n")
            print('\n(',a7,')   (',a8,')   (',a9,') ','\n',a4,'   ',a5,'   ',a6,'\n',a1,'   ',a2,'   ',a3,'\n\n')
        elif a7==a8==a9=='y':
            print(PlayerWithy," WON!! CONGRATS\n\n")
            print('\n(',a7,')   (',a8,')   (',a9,') ','\n',a4,'   ',a5,'   ',a6,'\n',a1,'   ',a2,'   ',a3,'\n\n')
        elif a5==a1==a9=='x':
            print(PlayerWithx," WON!! CONGRATS\n\n")
            print('\n',a7,'   ',a8,'   (',a9,')   ','\n',a4,'   (',a5,')   ',a6,'\n(',a1,')   ',a2,'   ',a3,'\n\n')
        elif a5==a1==a9=='y':
            print(PlayerWithy ," WON!! CONGRATS\n\n")
            print('\n',a7,'   ',a8,'   (',a9,')   ','\n',a4,'   (',a5,')   ',a6,'\n(',a1,')   ',a2,'   ',a3,'\n\n')
        elif a3==a5==a7=='x':
            print(PlayerWithx ," WON!! CONGRATS\n\n")
            print('\n(',a7,')   ',a8,'   ',a9,'   ','\n',a4,'   (',a5,')   ',a6,'\n',a1,'   ',a2,'   (',a3,')\n\n')
        elif a3==a5==a7=='y':
            print(PlayerWithy ," WON!! CONGRATS\n\n")
            print('\n(',a7,')   ',a8,'   ',a9,'   ','\n',a4,'   (',a5,')   ',a6,'\n',a1,'   ',a2,'   (',a3,')\n\n')
        elif a1==a4==a7=='y':
            print(PlayerWithy ," WON!! CONGRATS\n\n")
            print('\n(',a7,')   ',a8,'   ',a9,'   ','\n(',a4,')   ',a5,'   ',a6,'\n(',a1,')   ',a2,'   ',a3,'\n\n')
        elif a1==a4==a7=='x':
            print(PlayerWithx ," WON!! CONGRATS\n\n")
            print('\n(',a7,')   ',a8,'   ',a9,'   ','\n(',a4,')   ',a5,'   ',a6,'\n(',a1,')   ',a2,'   ',a3,'\n\n')
        elif a2==a5==a8=='y':
            print(PlayerWithy ," WON!! CONGRATS\n\n")
            print('\n',a7,'   (',a8,')   ',a9,'   ','\n',a4,'   (',a5,')   ',a6,'\n',a1,'   (',a2,')   ',a3,'\n\n')
        elif a2==a5==a8=='x':
            print(PlayerWithx ," WON!! CONGRATS\n\n")
            print('\n',a7,'   (',a8,')   ',a9,'   ','\n',a4,'   (',a5,')   ',a6,'\n',a1,'   (',a2,')   ',a3,'\n\n')
        elif a3==a6==a9=='y':
            print(PlayerWithy ," WON!! CONGRATS\n\n")
            print('\n',a7,'   ',a8,'   (',a9,')   ','\n',a4,'   ',a5,'   (',a6,')\n',a1,'   ',a2,'   (',a3,')\n\n')
        elif a3==a6==a9=='x':
            print(PlayerWithx ," WON!! CONGRATS\n\n")
            print('\n',a7,'   ',a8,'   (',a9,')   ','\n',a4,'   ',a5,'   (',a6,')\n',a1,'   ',a2,'   (',a3,')\n\n')
        else:
            print("THE MATCH HAS BEEN DRAWED!!!!")
        print("\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n")
        print("\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n") 

    
    while d==1:
        player2Entered=input( "Enter your position(PLAYER 2):-")
        
    
        if player2Entered=='1':
            if a1=='.':
                a1=player2Alpha
                d+=1
                
            else:
                print("IT IS ALREADY TAKEN!")
                
        elif player2Entered=='2':
            if a2=='.':
                a2=player2Alpha
                d+=1
            else:
                print("IT IS ALREADY TAKEN!")
                
        elif player2Entered=='3':
            if a3=='.':
                a3=player2Alpha
                d+=1
               
            else:
                print("IT IS ALREADY TAKEN!")
                
        elif player2Entered=='4':
            if a4=='.':
                a4=player2Alpha
                d+=1
                
            else:
                print("IT IS ALREADY TAKEN!")
                
        elif player2Entered=='5':
            if a5=='.':
                a5=player2Alpha
                d+=1
               
            else:
                print("IT IS ALREADY TAKEN!")
                
        elif player2Entered=='6':
            if a6=='.':
                a6=player2Alpha
                d+=1
                
            else:
                print("IT IS ALREADY TAKEN!")
                
        elif player2Entered=='7':
            if a7=='.':
                a7=player2Alpha
                d+=1
               
                
            else:
                print("IT IS ALREADY TAKEN!")
                
        elif player2Entered=='8':
            if a8=='.':
                a8=player2Alpha
                d+=1
                
            else:
                print("IT IS ALREADY TAKEN!")
                
        elif player2Entered=='9':
            if a9=='.':
                a9=player2Alpha
                d+=1
                
            else:
                print("IT IS ALREADY TAKEN!")
                
        else:
            print("ENTER ONLY YOUR POSITION!")
    print('\n',a7,'   ',a8,'   ',a9,'   ','\n',a4,'   ',a5,'   ',a6,'\n',a1,'   ',a2,'   ',a3,'\n\n')
    if ((a1==a2==a3 )and a1!='.' and a2!='.' and a3!='.')or ((a4==a5==a6)and a4!='.' and a5!='.' and a6!='.') or ((a7==a8==a9 )and a7!='.' and a8!='.' and a9!='.') or ((a5==a1==a9) and a5!='.' and a1!='.' and a9!='.' ) or ((a3==a5==a7)and a7!='.' and a5!='.' and a3!='.') or ((a1==a4==a7)and a1!='.' and a4!='.' and a7!='.') or ((a2==a5==a8)and a2!='.' and a5!='.' and a8!='.') or ((a3==a6==a9)and a3!='.' and a6!='.' and a9!='.'):
        c+=1
    elif(a1!='.' and a2!='.' and a3!='.' and a4!='.' and a5!='.' and a6!='.' and a7!='.' and a8!='.' and a9!='.'):
        
        c+=1
    
    else:
        c=1
    if c==2:
        print("\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n")
        print("\n                       !!!!!!      GAME ENDED  !!!!!!                                                  \n")
        print("\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n")
        print("\n                                   RESULT                                                        \n")
        
        if (a1==a2==a3=='x'):
             print(PlayerWithx," WON!! CONGRATS\n\n")
             print('\n',a7,'   ',a8,'   ',a9,'   ','\n',a4,'   ',a5,'   ',a6,'\n(',a1,')   (',a2,')   (',a3,')\n\n')
        elif a1==a2==a3=='y':
            print(PlayerWithy," WON!! CONGRATS\n\n")
            print('\n',a7,'   ',a8,'   ',a9,'   ','\n',a4,'   ',a5,'   ',a6,'\n(',a1,')   (',a2,')   (',a3,')\n\n')
        elif a4==a5==a6=='x':
            print(PlayerWithx," WON!! CONGRATS\n\n")
            print('\n',a7,'   ',a8,'   ',a9,'   ','\n(',a4,')   (',a5,')   (',a6,')\n',a1,'   ',a2,'   ',a3,'\n\n')
        elif a4==a5==a6=='y':
            print(PlayerWithy," WON!! CONGRATS\n\n")
            print('\n',a7,'   ',a8,'   ',a9,'   ','\n(',a4,')   (',a5,')   (',a6,')\n',a1,'   ',a2,'   ',a3,'\n\n')
        elif a7==a8==a9=='x':
            print(PlayerWithx," WON!! CONGRATS\n\n")
            print('\n(',a7,')   (',a8,')   (',a9,') ','\n',a4,'   ',a5,'   ',a6,'\n',a1,'   ',a2,'   ',a3,'\n\n')
        elif a7==a8==a9=='y':
            print(PlayerWithy," WON!! CONGRATS\n\n")
            print('\n(',a7,')   (',a8,')   (',a9,') ','\n',a4,'   ',a5,'   ',a6,'\n',a1,'   ',a2,'   ',a3,'\n\n')
        elif a5==a1==a9=='x':
            print(PlayerWithx," WON!! CONGRATS\n\n")
            print('\n',a7,'   ',a8,'   (',a9,')   ','\n',a4,'   (',a5,')   ',a6,'\n(',a1,')   ',a2,'   ',a3,'\n\n')
        elif a5==a1==a9=='y':
            print(PlayerWithy ," WON!! CONGRATS\n\n")
            print('\n',a7,'   ',a8,'   (',a9,')   ','\n',a4,'   (',a5,')   ',a6,'\n(',a1,')   ',a2,'   ',a3,'\n\n')
        elif a3==a5==a7=='x':
            print(PlayerWithx ," WON!! CONGRATS\n\n")
            print('\n(',a7,')   ',a8,'   ',a9,'   ','\n',a4,'   (',a5,')   ',a6,'\n',a1,'   ',a2,'   (',a3,')\n\n')
        elif a3==a5==a7=='y':
            print(PlayerWithy ," WON!! CONGRATS\n\n")
            print('\n(',a7,')   ',a8,'   ',a9,'   ','\n',a4,'   (',a5,')   ',a6,'\n',a1,'   ',a2,'   (',a3,')\n\n')
        elif a1==a4==a7=='y':
            print(PlayerWithy ," WON!! CONGRATS\n\n")
            print('\n(',a7,')   ',a8,'   ',a9,'   ','\n(',a4,')   ',a5,'   ',a6,'\n(',a1,')   ',a2,'   ',a3,'\n\n')
        elif a1==a4==a7=='x':
            print(PlayerWithx ," WON!! CONGRATS\n\n")
            print('\n(',a7,')   ',a8,'   ',a9,'   ','\n(',a4,')   ',a5,'   ',a6,'\n(',a1,')   ',a2,'   ',a3,'\n\n')
        elif a2==a5==a8=='y':
            print(PlayerWithy ," WON!! CONGRATS\n\n")
            print('\n',a7,'   (',a8,')   ',a9,'   ','\n',a4,'   (',a5,')   ',a6,'\n',a1,'   (',a2,')   ',a3,'\n\n')
        elif a2==a5==a8=='x':
            print(PlayerWithx ," WON!! CONGRATS\n\n")
            print('\n',a7,'   (',a8,')   ',a9,'   ','\n',a4,'   (',a5,')   ',a6,'\n',a1,'   (',a2,')   ',a3,'\n\n')
        elif a3==a6==a9=='y':
            print(PlayerWithy ," WON!! CONGRATS\n\n")
            print('\n',a7,'   ',a8,'   (',a9,')   ','\n',a4,'   ',a5,'   (',a6,')\n',a1,'   ',a2,'   (',a3,')\n\n')
        elif a3==a6==a9=='x':
            print(PlayerWithx ," WON!! CONGRATS\n\n")
            print('\n',a7,'   ',a8,'   (',a9,')   ','\n',a4,'   ',a5,'   (',a6,')\n',a1,'   ',a2,'   (',a3,')\n\n')
        else:
            print("THE MATCH HAS BEEN DRAWED!!!!")
        print("\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n")
        print("\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n")









