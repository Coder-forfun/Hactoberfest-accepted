def display_board(user_placements):
    '''
    display a 3*3 board with choices filled by players 
    '''
    print('\n' * 50)
    for row in range(0, 3):
        print('|' + ' '*2,end='')
        for element in range(0, 3):
            print(f'{user_placements[row * 3 + element]}{" " * 2}|',end='')
            print(' '*2,end='')
        print('\n'+'_'*19)

def user_choice():
    '''
    validates user choice are in range 1 to 9
    '''
    valid_positions = list(range(1,10))
    choice = input('enter the position(between 1 and 9): ')
    while choice.isdigit() == False or int(choice) not in valid_positions:
        print('\n'*100)
        choice = input('please enter a valid position between 1 and 9:')
    return int(choice)

def replace_postion(user_placements, player_num):
    '''
    updates value at chosen location
    '''
    location = user_choice()
    # avoid overwriting already filled locations
    while user_placements[location-1] != ' ':
        print(f'invalid location! already filled at {location}')
        location = user_choice()
    user_placements[location-1] = player_num
    return user_placements

def game_over(user_placements):
    possible_winning_patterns = [[0, 1, 2], [3, 4, 5], [6, 7, 8], [0, 3, 6], [1, 4, 7], [2, 5, 8], [0, 4, 8], [2, 4, 6]]
    for winning_pattern in possible_winning_patterns:
# check  any possible winning pattern exists and its member are not ' ' ( as we initailsied list with ' ')
        if user_placements[winning_pattern[0]] == user_placements[winning_pattern[1]] and user_placements[winning_pattern[1]] == user_placements[winning_pattern[2]] and user_placements[winning_pattern[0]] != ' ':
            print(f'player {user_placements[winning_pattern[0]]} wins')
            return True
# if ' ' is not in placements and all placements are already done. declare it a draw
    if ' ' not in user_placements:
        print('draw! well played')
        return True
    return False

def game(): 
    user_placements = [' '] * 9
    isPlayer1 = True
    display_board(user_placements)
    while game_over(user_placements) == False:
        if isPlayer1:
            player_num = 1
        else:
            player_num = 2
        
        user_placements = replace_postion(user_placements, player_num)
        display_board(user_placements)
        isPlayer1 = not isPlayer1

def init_game():
    choice = 'y'
    while choice == 'y':
        game()
        valid_choices = ['y', 'n']
        choice = input('do you want to replay? y or n:')
        while choice not in valid_choices:
            print('\n'*100)
            choice = input('do you want to replay? reply in y or n only:')
    print('bye!')

init_game()