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
struct node *nemem,*head;

int main()
{
    createnode();
    add();
    print();
}

void createnode()
{
    nemem=(struct node *)malloc (sizeof(struct node));
    
    scanf("\n%d",&nemem->data);
    nemem->next=NULL;
    head=nemem;
}

void add()
{
    printf("\nEnter value of data : ");
    scanf("%d",&head->data);
}

void print()
{
    printf("\nnew node data is : %d",head->data);
}