#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#include "linkedlist.h"
#include "snake.h"
#include "main.h"





void display(char board[HEIGHT][WIDTH], int max_i, int max_j, int score, int max_score) {
    int i, j;
    clear();
    move(0, 0);	
    printw("SCORE: %d MAX SCORE: %d\n", score, max_score);
    for(i = 0; i < max_i; i++) {
        for(j = 0; j < max_j; j++)
            printw("%c", board[i][j]);
        printw("\n");
    }

}

int random_x() {
    int random;
    do {
        random = rand() % LINES/2;
    }
    while (random == 0 || random == LINES/2 - 1);
    return random;

}

int random_y() {
    int random;
    do {
        random = rand() % COLS/2;
    }
    while (random == 0 || random == COLS/2 - 1);
    return random;

}

int kbhit(void)
{
    int ch = getch();

    if (ch != ERR) {
        ungetch(ch);
        return 1;
    } else {
        return 0;
    }
}

void add_food(char board[HEIGHT][WIDTH], int food_position[2]) {
    int l = random_x();
    int c = random_y();
    board[l][c] = '*';
    food_position[0] = l;
    food_position[1] = c;
}


void reposition_food(char board[HEIGHT][WIDTH], int food_position[2]) {
    int last_c = food_position[1];
    int last_l = food_position[0];
    bool move_food = FALSE;
    while(food_position[0] >= LINES/2 - 1 && food_position[0] >= 1) 
    {
    food_position[0]--; 
    move_food = TRUE;
    }
    while(food_position[1] >= COLS/2 - 1 && food_position[1] >= 1) 
    {
        food_position[1]--;
        move_food = TRUE;
    }

    if (move_food)
        board[last_l][last_c] = '#';

    board[food_position[0]][food_position[1]] = '*';
}

void clear_board(char board[HEIGHT][WIDTH]) {
    for (int i = 0; i < HEIGHT; i++)
        for(int j = 0; j < WIDTH; j++)
            board[i][j] = ' ';
}

void add_board_walls(char board[HEIGHT][WIDTH]) {
        for (int i = 0; i < LINES/2; i++)
            for(int j = 0; j < COLS/2; j++) {
                if (i == 0 || j == 0 || i == LINES/2- 1 || j == COLS/2- 1) 
                    board[i][j] = '#';
                else
                    board[i][j] = ' ';
            }
}

int new_game(int max_score, int level) {
    
    int clock_tick = (int)(CLOCKS_PER_SEC * ((float)(10-level))/20);
    int food_position[2], score;
    char board[HEIGHT][WIDTH];
    char key_pressed = 'a';
    char last_key1, last_key2;
    last_key1 = last_key2 = '\n';
    int last_col = COLS; int last_lines=LINES;
  
    
    score = 0;
    
    struct node *snake = NULL;
    
    snake = create(LINES/4, COLS/4);
    add_board_walls(board);
    add_food(board, food_position);
    
    while(TRUE) {
        
        clock_t target = clock() + clock_tick;
        /*wait key hit or time*/
        
        while (!kbhit() && clock() < target) {}
        if (kbhit()) {
            last_key2 = last_key1;
            last_key1 = key_pressed;    
            key_pressed = getch();
            
        //terminal resizing
        if (key_pressed == KEY_RESIZE || key_pressed == -102) {
            clear_board(board);
            add_board_walls(board);
            reposition_food(board, food_position);
            display(board, LINES/2, COLS/2, score, max_score);
          
            key_pressed = last_key1;
            last_key1 = last_key2;  
        }

        
            refresh();
        }
        
        clear_snake(board, snake);
        snake = update_snake(board, snake, key_pressed, last_key1);
        add_snake(board, snake);   
        display(board, LINES/2, COLS/2, score, max_score);
        
        if (hit_food(snake, food_position)) {
            score += 1;
            board[food_position[0]][food_position[1]] = ' ';
            add_food(board, food_position);
            snake = increase_snake(snake, key_pressed);
            add_snake(board, snake);
            display(board, LINES/2, COLS/2, score, max_score);

        }

        if (hit_wall(snake) || hit_snake(snake)) {
            free_list(snake);
            return score;
        }    
    }
}

int main() {
    time_t t;
    char key_pressed;
    int score, max_score, level;
    score = max_score = 0;
    srand((unsigned) time(&t));

    initscr();
    cbreak();
    noecho();
    nodelay(stdscr, TRUE);
    scrollok(stdscr, TRUE);

    while(TRUE) {
        clear();
        printw("Use only WSAD keys\n\nChoose dificulty level(1..9)?\n");
        while (!kbhit());
        if (kbhit()) {   
            key_pressed = getch();
            level = key_pressed - '0';
            refresh();
        }

        score = new_game(max_score, level);
        if(score > max_score) max_score = score;
        
        
        printw("\n\nYou lost!\n\n");
        printw("SCORE: %d BEST SCORE: %d\n", score, max_score);
        printw("Do you want to try again? S/n");
         
        while (!kbhit());
        if (kbhit()) {   
            key_pressed = getch();
            refresh();
        }
        if (key_pressed == 'n') {
            endwin();
            return 0;
        }

    }
    return 0;
 
}
