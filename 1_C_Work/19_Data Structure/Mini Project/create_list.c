#include<stdio.h>
#include<stdlib.h>
#include"main.h"

struct node * create(int choice)
{
    head = NULL;
    while(choice != 0)
    {
        newmem=(struct node *)malloc (sizeof(struct node));
        printf("\nEnter roll no : ");
        scanf("%d",&newmem->data);
        printf("\nEnter Name : ");
        scanf("%s",&newmem->name);
        newmem->next=0;
        if(head == 0)
        {
            head = tmp = newmem;
        }
        else
        {
            tmp -> next = newmem;
            tmp = newmem;
        }
        choice--;

    }

    printf("__________________\n");

    tmp = head;
    printf("\nThe Student datas are : \n");
    tmp = head;
    while(tmp != NULL)
    {
        printf("%d  %s \n",tmp->data,tmp->name);
        tmp = tmp->next;
    }
    printf("\n");
    
    return head;

}