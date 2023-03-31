#include<stdio.h>
#include<stdlib.h>

void createnode(void);
void add(void);
void print(void);

struct node
{
    int data;
    struct node *next;
};
struct node *newmem,*head,*tmp;

int main()
{
    createnode();
    head=newmem;
    add();
    print();
    createnode();
    add();
    print();
}

void createnode()
{
    newmem=(struct node *)malloc (sizeof(struct node));
    newmem->next=NULL;
    tmp = newmem;
    
}

void add()
{
    printf("\nEnter value of data : ");
    scanf("%d",&tmp->data);
}

void print()
{
    printf("\nnew node data is : %d",tmp->data);
}