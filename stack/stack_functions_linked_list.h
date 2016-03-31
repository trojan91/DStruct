#include<stdio.h>

struct node {
    int data;
    struct node *next;
};

void create_stack(struct node **head)
{
    struct node *p1;
    p1=NULL;
    *head = p1;
}

void push(struct node **head,int data)
{
    struct node *new_node;
    int d1;

    if(*head == NULL)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = data;
        new_node->next = NULL;
        *head = new_node;
    }

    else
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = data;
        new_node->next = *head;
        *head = new_node;

    }
}

int pop(struct node **head)
{
    struct node *p1;
    int data;
    p1=*head;
    data = p1->data;
    *head = (*head)->next;
    free(p1);

    return data;


}

void top(struct node *head)
{
    if(head == NULL)
    {
        printf("no elemets found\n");
    }

    else
    {
        printf("%d",head->data);
        return;
    }
}






