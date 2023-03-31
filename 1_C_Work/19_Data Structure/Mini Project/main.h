struct node
    {
        int data;
        char name[50];
        struct node *next;
    };
struct node *newmem,*head,*tmp,*prev;

struct node * create(int);
void insertion(struct node *);
void deletion(struct node *);

int main();