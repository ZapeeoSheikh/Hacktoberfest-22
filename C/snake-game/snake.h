#include "main.h"
void add_snake(char board[HEIGHT][WIDTH], struct node *head);
void clear_snake(char board[HEIGHT][WIDTH], struct node *head);
struct node* increase_snake(struct node *head, char direction);
//TODO: arrumar essa função
struct node *reposition_snake(struct node *head);
struct node *update_snake(char board[HEIGHT][WIDTH], struct node *head, char direction, char last_key);
int hit_wall(struct node *head);
int hit_snake(struct node *head);
int hit_food(struct node *head, int food_position[2]);