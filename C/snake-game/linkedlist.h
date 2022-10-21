struct node* create(int l, int c);
struct node* add(struct node *head, int l, int c);
struct node *del_last(struct node *head);
void print(struct node *head);
struct node* add_after_head(struct node *head, int l, int c);
int size(struct node *head);
void free_list(struct node *head);

struct node
{
        int l, c;
        struct node *next;
};
