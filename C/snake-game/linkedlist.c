#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

int size(struct node *head) {
    if(!head->next)
        return 1;
    return 1 + size(head->next);
}

struct node* create(int l, int c) {
    struct node *tmp;
    tmp = (struct node*)malloc(sizeof(struct node));
    tmp->c = c; tmp->l = l; tmp->next = NULL;
    return tmp;
    
}
struct node* add(struct node *head, int l, int c) {
    struct node *tmp;
    tmp = (struct node*)malloc(sizeof(struct node));
    tmp->c = c; tmp->l = l; tmp->next = head;

    return tmp;
}


struct node* add_after_head(struct node *head, int l, int c) {
    struct node *ptr, *tmp, *aux;
    ptr = head;
    tmp = (struct node*)malloc(sizeof(struct node));
    tmp->c = c; tmp->l = l; 
    if (!ptr->next) {
        tmp->next = NULL;
        ptr->next = tmp;
        return ptr; 
    }

    aux = ptr->next;
    ptr->next = tmp;
    tmp->next = aux;
    return ptr;
}

struct node *del_last(struct node *head) {
    struct node *current, *last;
    current = head;
    last = head->next;

    while (last->next) {
        current = last;
        last = last->next;
    }
    free(last);
    current->next = NULL;
    return head;

}
void free_list(struct node *head) {
    struct node *ptr, *last;
    ptr = head;
    while(ptr) {
        last = ptr;
        ptr = ptr->next;
        free(last);
    }
}

void print(struct node *head) {
    struct node *ptr = head;
    
    while(ptr) {
        printw(" (%d, %d) ", ptr->c, ptr->l);
        ptr = ptr->next;
     
    }
}



