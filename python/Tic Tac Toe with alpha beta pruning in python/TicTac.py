from random import randint
from math import inf

board = [[0, 0, 0],[0, 0, 0],[0, 0, 0]]             # Initializing the board list
moves = {1: [0, 0], 2: [0, 1], 3: [0, 2], 4: [1, 0], 5: [1, 1], 6: [1, 2], 7: [2, 0], 8: [2, 1], 9: [2, 2]}

def printBoard(board):                    # Printing the board
    chars = {1: 'X', -1: 'O', 0: ' '}
    for x in board:
        for y in x:
            ch = chars[y]
            print('| '+f'{ch} ', end='')
        print('|\n')
    print('-------------')

def winner(board, player):                  # Check whether the given player have won or not
    if [player, player, player] in [[board[0][0], board[0][1], board[0][2]]]:    # for row 1
        return True
    if [player, player, player] in [[board[1][0], board[1][1], board[1][2]]]:    # for row 2
        return True
    if [player, player, player] in [[board[2][0], board[2][1], board[2][2]]]:    # for row 3
        return True
    if [player, player, player] in [[board[0][0], board[1][0], board[2][0]]]:    # for column 1
        return True
    if [player, player, player] in [[board[0][1], board[1][1], board[2][1]]]:    # for column 2
        return True
    if [player, player, player] in [[board[0][2], board[1][2], board[2][2]]]:    # for column 3
        return True
    if [player, player, player] in [[board[0][0], board[1][1], board[2][2]]]:    # for diagoal 1
        return True
    if [player, player, player] in [[board[0][2], board[1][1], board[2][0]]]:    # for diagonal 2
        return True

    return False

def isGameWon(board):                           # check whether game is won by any player or not
    return winner(board, 1) or winner(board, -1)

def clearBoard(board):                          # clear board and initialize it with 0 if player again wants to play
    for i in range(3):
        for j in range(3):
            board[i][j] = 0

def printResult(board):                         # print result and tells which player wins
    if winner(board, 1):
        print('Human player has won! ' + '\n')

    elif winner(board, -1):
        print('AI player has won! ' + '\n')

    else:
        print('Draw!!!' + '\n')

def emptySpaces(board):           # to store blank spaces
    blank = []
    for x in range(3):
        for y in range(3):
            if board[x][y] == 0:   
                if x==0 and y==0:           # to store blank spaces in number not in x axis and y axis
                    blank.append(1)
                if x==0 and y==1:
                    blank.append(2)
                if x==0 and y==2:
                    blank.append(3)
                if x==1 and y==0:
                    blank.append(4)
                if x==1 and y==1:
                    blank.append(5)
                if x==1 and y==2:
                    blank.append(6)
                if x==2 and y==0:
                    blank.append(7)
                if x==2 and y==1:
                    blank.append(8)
                if x==2 and y==2:
                    blank.append(9)

    return blank

def isBoardComplete(board):     # to check whether board is complete or any blank space remains to be filled
    if len(emptySpaces(board)) == 0:
        return True
    return False

def placeMove(board, m, player):         # in this function board is initialized with either X or O depends on which player turn it is
    board[moves[m][0]][moves[m][1]] = player

def humanPlayerMove(board):                 # this is for human player to select move from available moves
    e = True
    while e:
            move = int(input('Its your turn.Enter a number between 1-9: '))
            if move < 1 or move > 9:
                print('Invalid Move! Select between 1 to 9!')
            elif(move not in emptySpaces(board)):
                print('Already filled! Try again!')
            else:
                placeMove(board, move, 1)
                printBoard(board)
                e = False

def Score(board):   # this function calculate score and return score value
    if winner(board, 1):
        return 10

    elif winner(board, -1):
        return -10

    else:
        return 0

def alphaBeta(board, depth, alpha, beta, player):  # main function to select move of ai player on the basis of what human player can take move
    
    move = -1
    
    if depth == 0 or isGameWon(board):
        return [move, Score(board)]

    else:
        for cell in emptySpaces(board):
            
            placeMove(board, cell, player)
            score = alphaBeta(board, depth - 1, alpha, beta, -player)
            
            if player == 1:
                # X is always the max player
                if score[1] > alpha:
                    alpha = score[1]
                    move = cell        
            else:
                if score[1] < beta:
                    beta = score[1]
                    move = cell
            
            placeMove(board, cell, 0)
            
            if alpha >= beta:           #pruning nodes
                break

        if player == 1:
            return [move, alpha]            

        else:
            return [move, beta]

def AI_Player(board):           # take move with the help of alpha beta function
    if len(emptySpaces(board)) == 9:
        m = randint(1,9)
        placeMove(board, m, -1)
        printBoard(board)
        print("AI player has taken move at position "+f'{m}.')

    else:
        result = alphaBeta(board, len(emptySpaces(board)), -inf, inf, -1)
        placeMove(board, result[0], -1)
        printBoard(board)
        print("AI player has taken move at position "+f'{result[0]}.')

def makeMove(board, player):            # decide which player will take first move
    if player == 1:
        humanPlayerMove(board)
    else:
        AI_Player(board)    

def main():
    bool = True
    while bool:         # loop for to play again

        print("                                                            TIC-TAC-TOE using ALPHA-BETA Pruning"+ '\n')
        print('X is by default for Human Player')
        print('O is by default for AI Player'+ '\n')
        
        while True:     # loop to get correct integers
            order = int(input('Enter to play 1st or 2nd: '))
            if not (order == 1 or order == 2):
                print('Please pick 1 or 2')
            else:
                break
        
        if order == 2:              # setting player according to turn
            currentPlayer = -1
        else:
            currentPlayer = 1
            printBoard(board)

        while not(isBoardComplete(board) or isGameWon(board)):          
            makeMove(board, currentPlayer)
            currentPlayer *= -1

        printResult(board)
        
        clearBoard(board)

        playAgain = input('Do you want to play again (y/n): ')
        if not (playAgain == 'y'):
            print('                                                 Thanks for playing.')
            print('                                                 -------------------')
            break
main()