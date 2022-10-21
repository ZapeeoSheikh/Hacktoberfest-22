#include "linkedlist.h"
#include "snake.h"

void add_snake(char board[HEIGHT][WIDTH], struct node *head) {
    struct node *ptr;
    ptr = head;
    while(ptr) {
        board[ptr->l][ptr->c] = 's';
        ptr = ptr->next;
    }
}

void clear_snake(char board[HEIGHT][WIDTH], struct node *head) {
    struct node *ptr;
    ptr = head;
    while(ptr) {
        board[ptr->l][ptr->c] = ' ';
        ptr = ptr->next;
    }
}

struct node* increase_snake(struct node *head, char direction) {
    int l,c;
    l = c = 0;
    
    switch (direction)
    {
    case 'w':
        l = -1;
        break;
    case 's':
        l = +1;
        break; 
    case 'a':
        c = -1;
        break;
    case 'd':
        c = +1;
        break;
    default:
        break;
    }

    head = add_after_head(head, head->l, head->c);
    head->l += l; head->c += c;

    return head;

}

struct node *reposition_snake(struct node *head) {
    struct node *ptr;
    ptr = head;
    bool need_col_reposition = FALSE;
    bool need_line_reposition = FALSE;
    
    while (ptr) {
        if (ptr->c >= COLS/2 - 1) need_col_reposition = TRUE;
        if (ptr->l >= LINES/2 - 1) need_line_reposition = TRUE;
        ptr = ptr->next;
    }
    if (!(need_col_reposition || need_line_reposition)) return head;

    ptr = head;
    while (ptr) {
        if (need_col_reposition) ptr->c--;
        if(need_line_reposition) ptr->l--;
        ptr = ptr->next;
    }
    return head;
        

}


struct node *update_snake(char board[HEIGHT][WIDTH], struct node *head, char direction, char last_key) {
    int l,c;
    
    l = c = 0;
    switch (direction)
    {
    case 'w':
        l = -1;
        break;
    case 's':
        l = +1;
        break; 
    case 'a':
        c = -1;
        break;
    case 'd':
        c = +1;
        break;
    default:
        break;
    }
    
    if (head->next)
        if (head->l + l == head->next->l && head->c + c == head->next->c) {
            head = add(head, head->l - l, head->c - c);
            head = del_last(head);
            return head;
        }
    head = add(head, head->l + l, head->c + c);
    head = del_last(head);
    return head; 
}

int hit_wall(struct node *head) {
    if (head->l == 0 || head->c == 0 || head->l == LINES/2- 1 || head->c == COLS/2 - 1)
        return TRUE;
    return FALSE;
}

int hit_snake(struct node *head) {
    struct node *ptr;
    ptr = head->next;
    while (ptr) {
        if(head->l == ptr->l && head->c == ptr->c)
            return TRUE;
        ptr = ptr->next;
    }
    return FALSE;
}

int hit_food(struct node *head, int food_position[2]) {
    struct node *ptr;
    ptr = head;
    while (ptr) {
        if (ptr->l == food_position[0] && ptr->c == food_position[1])
            return TRUE;
        ptr = ptr->next;
    }
    return FALSE;
    
}