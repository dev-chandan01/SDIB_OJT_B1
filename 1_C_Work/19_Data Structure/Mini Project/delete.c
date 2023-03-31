#include<stdio.h>
#include<stdlib.h>
#include"main.h"

void deletion(struct node *head)
{   
    
    int choice;
    top:
    printf("\n1.Delete at Beginning\n2.Delete at Position\n3.Delete at End\nPress 0 key to Exit");
    printf("\nEnter your choice :- ");
    scanf("%d",&choice);
    if(choice == 1)
    {
        tmp = head;
        head=head->next;
        free(tmp);
        printf("_________________________________\n");
        printf("\nStudent Succesfully Deleted at Beginning\nThe student datas are : ");
        tmp = head;
        while(tmp != NULL)
        {
            printf("%d  %s \n",tmp->data,tmp->name);
            tmp = tmp->next;
        }
        printf("\n");
        goto top;

    }

    else if(choice == 2)
    {
        
        int pos,i=1;
        printf("\nEnter the position : ");
        scanf("%d",&pos);
        tmp =prev= head;
        while(i<pos)
        {
            prev = tmp;
            tmp = tmp->next;
            i++;
        }
        prev->next = tmp->next;
        free(tmp);
        printf("_________________________________\n");
        printf("\nStudent Succesfully Deleted at position %d\nThe student datas are : \n",pos);
        tmp = head;
        while(tmp != NULL)
        {
            printf("%d  %s \n",tmp->data,tmp->name);
            tmp = tmp->next;
        }
        printf("\n");
        goto top;
    
    }
    else if(choice == 3)
    {
        tmp =prev= head;
        while(tmp->next != NULL)
        {
            prev=tmp;
            tmp=tmp->next;
        }
        prev->next = NULL;
        free(tmp);
        printf("_________________________________\n");
        printf("\nStudent Succesfully Deleted at End\nThe student datas are : ");
        tmp = head;
        while(tmp != NULL)
        {
            printf("%d  %s \n",tmp->data,tmp->name);
            tmp = tmp->next;
        }
        printf("\n");
        goto top;
    }
    else if(choice == 0)
    {
        printf("_________________________________\n");
        main();
    }

}